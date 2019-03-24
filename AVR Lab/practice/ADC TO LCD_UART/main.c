#define F_CPU   16000000

//Macro for Baud Rate
#define BAUD 9600
#define BAUD_VALUE    F_CPU/16/BAUD - 1

#include<avr/io.h>
#include<avr/interrupt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<util/delay.h>

#define SBI(bit)    PORTA |= (1<<bit)
#define CLI(bit)    PORTA &= ~(1<<bit);
#define RS  PA0
#define EN  PA2

char dataBuff[32] = { 0 };
volatile int Counter = 0;
volatile int ss = 0;
volatile int mm = 0;
volatile int hh = 0;
void initUART();
void putChar(char data);
void sendString(char *str);
void initADC();
int getADCValue();
void initTimer1CTC();
/****LCD*****/
void initLCD();
void sendCMD(char cmd);
void sendDATA(char data);
void enable();

int main()
{
    DDRC = 0xFF;
    DDRE &= ~(1<<PE6) & ~(1<<PE7);//INPUT
    PORTE |= (1<<PE6) | (1<<PE7);//PULL UP
    PORTC = 0xFF;
    //PORTC = 0x00;
    DDRD |= (1<<PD6) | (1<<PD7);
    PORTD |= (1<<PD6) | (1<<PD7);
    //Ext Int
    EIMSK |= (1<<INT7) | (1<<INT6);

    initUART();
    //initADC();
    initTimer1CTC();
   // int adcVal = 0;
    //sei();
    initLCD();
    sendCMD(0x14);
    sendCMD(0x06);
    sendCMD(0x0F);
    sendCMD(0x01);
    sendCMD(0x80);
    sendData('A');
    sendString("HELLO UART\r\n");
    while(1){
        /*itoa(Counter,dataBuff,10);
        sendString(dataBuff);
        sendString("\r\n");
        */
       /*
       if (!(PIND & (1<<PD6))) {//Reset
           TCCR1B &= ~(1<<CS11) & ~(1<<CS10);
           ss = 0;
           mm = 0;
           hh = 0;
           Counter = 0;
       }
       if (!(PIND & (1<<PD7))) {//start
           TCCR1B |= (1<<CS11) | (1<<CS10);
       }
       
        if(Counter >= 1000)
        {
            Counter = 0;
            ss++;
        }
        if (ss >= 60) {
            ss = 0;
            mm++;
        }
        if (mm >= 60) {
            mm = 0;
            hh++;
        }
        sprintf(dataBuff,"H:%d M:%d: S:%d\r\n",hh,mm,ss);
        sendString(dataBuff);
        memset(dataBuff,0,strlen(dataBuff));
        */
        
        /*
        adcVal = getADCValue();
        //adcVal = (adcVal * 5)/1024;
        sprintf(dataBuff, "LDR=%d",adcVal);
        //itoa(adcVal,dataBuff,10);
        sendString(dataBuff);
        sendString("\r\n");
        */
        //PORTC = ~PINC;
        //_delay_ms(100);

    }
    return 0;
}

void initUART()
{
    UBRR0H = (BAUD_VALUE) >> 8;//Buad higher Reg val
    UBRR0L = BAUD_VALUE;//Baud Lower Reg Value
    UCSR0B |= (1<<RXEN0) | (1<<TXEN0);//Enable RX and TX
    UCSR0C |= (1<<UCSZ01) | (1<<UCSZ00);//Set 8 data bits
}

void putChar(char data)
{
    while(!(UCSR0A & (1<<UDRE0)));
        UDR0 = data;
}

void sendString(char *str)
{
    while(*str != 0){
        putChar(*str++);
    }
    
}

//ADC*******************************
void initADC()
{
    ADMUX |= (1<< REFS0);
    //ADMUX |= (1<<MUX0) | (1<<MUX1);
    ADCSRA |= (1<<ADEN) | (1<<ADPS2) | (1<<ADPS1) | (1<<ADPS0); 
}

int getADCValue()
{
    int value;
    ADCSRA |= (1<<ADSC);//Start Conversion
    _delay_ms(20);
    while(!(ADCSRA & (1<<ADIF)));
    _delay_ms(20);
    //value = ADCL << 8;
    value = ADC;
    return value;
}

void initTimer1CTC()
{
    TCCR1A = 0x00;
    TCNT1 = 0;
    OCR1A = 0xF9;
    TCCR1B |= (1<<WGM12) | (1<<CS11) | ((1<<CS10));//clock/64 prescale
    TIMSK |= (1<<OCIE1A);
    sei();
}

ISR(TIMER1_COMPA_vect)
{
    cli();
    TCNT1 = 0;
    Counter++;
    if(Counter == 3)
    //PORTC = 0x00;
    sei();
}
//Ext Int
ISR(INT6_vect)
{
    cli();
    sendString("Ext Int 6 Stop\r\n");
    TCCR1B |= (1<<CS11) | (1<<CS10);
    sei();
}

ISR(INT7_vect)
{
    cli();
    sendString("Ext Int 7 LAP\r\n");
    TCCR1B &= ~(1<<CS11) & ~(1<<CS10);
    sei(); 
}
/**************LCD**********************/
void initLCD()
{
    DDRA = 0xFF;
    sendCMD(0x28);
    CLI(RS);
    enable();
}

void enable()
{
    SBI(EN);
    _delay_ms(20);
    CLI(EN);
    _delay_ms(20);
}

void sendCMD(char cmd)
{
    PORTA |= cmd & 0xF0;
    CLI(RS);
    enable();
    cmd = cmd << 4;
    PORTA |= cmd & 0xF0;
    CLI(RS);
    enable();
}

void sendData(char data)
{
    PORTA |= data & 0xF0;//Higher Nibble
    SBI(RS);
    enable();
    data = data << 4;//Lower Nibble
    PORTA |= data & 0xF0;
    SBI(RS);
    enable();
}

void setCursor(uint8_t x, uint8_t y)
{
    if(x == 0)  sendCMD(0x80|y);//First Line
    if(x == 1)  sendCMD(0xC0|y);//Second Line
}