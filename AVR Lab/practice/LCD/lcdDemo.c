#define F_CPU	16000000
#define LCD PORTA
#define RS PA0
#define EN PA2
#define SBI(bit)	PORTA |= (1<<bit)
#define CLI(bit)	PORTA &= ~(1<<bit)

#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

char dataBuff[32] = { 0 };
volatile int counter = 0;
int ss,mm,hh;


void initLCD();
void enable();
void lcdCMD(unsigned char cmd);
void lcdData(unsigned char data);
void lcdString(char *str);
void setCursor(uint8_t x, uint8_t y);

void initADC();
int getADCValue();

void initTimer1CTC();

int main()
{
	//int adcVal = 0;
	DDRC = 0xFF;
	PORTC = 0xFF;
	DDRA |= (1<<PA3);

	initLCD();
	initADC();
	initTimer1CTC();

	lcdCMD(0x14);// Cursor shift,Shift to write
	lcdCMD(0x06);//Increment,Accompanies display shift
	lcdCMD(0x0C);//Display ON,Cursor ON, Blink ON
	lcdCMD(0x01);//Clear Display
	lcdCMD(0x80);//Set DDRAM
	lcdString("All THE BEST");
	setCursor(1,0);
	lcdString("Frm JAGANNATH");
	_delay_ms(1000);
	
	while(1){
		/*lcdCMD(0x01);//Clear Display
		adcVal = getADCValue();
		sprintf(dataBuff,"ADC=%d",adcVal);
		lcdString(dataBuff);
		_delay_ms(250);*/
		/*if(counter>=1000)
		{
			counter = 0;
			ss++;
		}
		if(ss >= 60)
		{
			PORTA |= (1<<PA3);
			_delay_ms(200);
			PORTA &= ~(1<<PA3);
			ss = 0;
			mm++;
		}
		if(mm >= 60)
		{
			mm = 0;
			hh++;
		}
		
		sprintf(dataBuff,"%d:%d:%d:%d",hh,mm,ss,counter);
		
		lcdString(dataBuff);
		_delay_ms(250);
		lcdCMD(0x01);//Clear Display
		*/
		/* code */
	}
	

	return 0;
}
void initLCD()
{
	DDRA = 0xFF;
	lcdCMD(0x28);//Function set, 2 Lines, Font 5x8 dots
	CLI(RS);	
	enable();
}

void enable()
{
	SBI(EN);
	_delay_us(200);
	CLI(EN);
	_delay_us(200);
}

void lcdCMD(unsigned char cmd)
{
	LCD = cmd & 0xF0;
	CLI(RS);
	enable();
	cmd = cmd << 4;
	LCD = cmd & 0xF0;
	CLI(RS);
	enable();
}

void lcdData(unsigned char data)
{
	LCD = data & 0xF0;
	SBI(RS);
	enable();
	data = data << 4;
	LCD = data & 0xF0;
	SBI(RS);
	enable();
}

void lcdString(char *str)
{
	while(*str != 0)
	{
		lcdData(*str++);
	}
}

void setCursor(uint8_t x, uint8_t y)
{
    if(x == 0)  lcdCMD(0x80|y);//First Line
    if(x == 1)  lcdCMD(0xC0|y);//Second Line
}

void initADC()
{
	ADMUX |= (1<<REFS0);
	ADCSRA |= (1<<ADEN) | (1<<ADPS2) | (1<<ADPS1) | (1<<ADPS0);
}

int getADCValue()
{
	ADCSRA |= (1<<ADSC);
	while(!(ADCSRA & (1<<ADIF)));
	return ADC;
}

void initTimer1CTC()
{
	OCR1A =0xF9;
	TCNT1 = 0;
	TCCR1B |= (1<<WGM12) | (1<<CS11) | (1<<CS10);
	TIMSK |= (1<<OCIE1A);
	sei();
}

ISR(TIMER1_COMPA_vect)
{
	cli();
	PORTC = 0x00;
	TCNT1 = 0;
	counter++;
	sei();
}

