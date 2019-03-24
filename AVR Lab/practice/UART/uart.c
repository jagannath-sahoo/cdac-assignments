#define F_CPU 16000000
#define BAUD 9600
#define BAUD_VALUE F_CPU/16/BAUD - 1
#define SIZE 64
#define CLEAR memset(dataBuff,0,32);

#include <avr/io.h>
#include<stdio.h>
#include<stdlib.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <string.h>

char buff[SIZE] = { 0 };
volatile int writePointer = 0;
volatile int readPointer = 0;
float dataFloat = 0;
int dataInt = 0;
char convertBuff[64] = { 0 };
char dataBuff[32];

void initUART();
void sendChar(char data);
char receiveChar();
char* receiveString(char *strBuf,int len);
void sendString(const char *str);
char getChar();

int main()
{
    DDRC = 0xFF;
    PORTC = 0xFF;
    char dataBuff[32];
    int A = 0,B=0;
    //int index = 0;
    initUART();
    char ch;
    //_delay_ms(2000);
    //sendString("HELLO \r\n");
    //dataFloat = 213.4;
    //dataInt = 121;
    //sprintf(convertBuff,"%d",dataInt);
    sendString(convertBuff);
    while(1){
        sendString("\r\nAVR CALCULATOR\r\n");
        sendString(" 1 = Addition\r\n 2 = Substractin\r\n 3 = Multiplication\r\n 4 = Division\r\n");
        ch = receiveChar();
        //sendChar(ch);
        switch(ch){
            case '1':
                sendString("A = ?\r\n");
                receiveString(dataBuff,32);
                A = atoi(dataBuff);
                CLEAR;
                sendString("B = ?\r\n");
                receiveString(dataBuff,32);
                B = atoi(dataBuff);
                CLEAR;
                itoa(A+B,dataBuff,10);
                sendString("Results :");
                sendString(dataBuff);
                sendString("\r\n");
                CLEAR;
                break;

            case '2':
                sendString("A = ?\r\n");
                receiveString(dataBuff,32);
                A = atoi(dataBuff);
                CLEAR;
                itoa(A-B,dataBuff,10);
                receiveString(dataBuff,32);
                B = atoi(dataBuff);
                CLEAR;
                itoa(A-B,dataBuff,10);
                sendString("Results :");
                sendString(dataBuff);
                sendString("\r\n");
                CLEAR;
                break;

            case '3':
                sendString("A = ?\r\n");
                receiveString(dataBuff,32);
                A = atoi(dataBuff);
                CLEAR;
                sendString("B = ?\r\n");
                receiveString(dataBuff,32);
                B = atoi(dataBuff);
                CLEAR;
                itoa(A*B,dataBuff,10);
                //sprintf(dataBuff,"%d",A*B);
                sendString("Results :");
                sendString(dataBuff);
                sendString("\r\n");
                CLEAR;
                break;

            case '4':
                sendString("A = ?\r\n");
                receiveString(dataBuff,32);
                A = atoi(dataBuff);
                CLEAR;
                sendString("B = ?\r\n");
                receiveString(dataBuff,32);
                B = atoi(dataBuff);
                CLEAR;
                dtostrf((float)A/(float)B,7,3,dataBuff);
                //sprintf(dataBuff,"%f",(float)A/(float)B);
                //gcvt(, 6, dataBuff); 
                sendString("Results :");
                sendString(dataBuff);
                sendString("\r\n");
                CLEAR;
                break;

            default:
                sendString("Please Enter choice again");
        }
        //_delay_ms(2000);
        //sendChar(receiveChar());
        /*while((ch = receiveChar()) != 0x0D)
        {
            convertBuff[index++] = ch;
        }*/
        //receiveString(convertBuff,10);
        //dataFloat = atof(convertBuff);
        //dataFloat  = 231.23;
        //sprintf(convertBuff,"%g",dataFloat);
        //sendString(convertBuff);
        //sendString("\r\n");
        //receiveString(convertBuff,10);
        //memset(convertBuff,0,strlen(convertBuff));
       // index = 0;
        //sendString(convertBuff);
        PORTC = ~PINC;
        
    }
        return 0;
}

void initUART()
{
    UBRR0H = (BAUD_VALUE) >> 8;
    UBRR0L = BAUD_VALUE;
    UCSR0B |= (1<<TXEN0) | (1<<RXEN0) | (1<<RXCIE0);
    UCSR0C |= (1<<UCSZ01) | (UCSZ00);//8 bit
    //sei();
}

void sendChar(char data)
{
    if(data != 0)
    {
        while(!(UCSR0A & (1<<UDRE0)));
        UDR0 = data;
    }
}

char receiveChar()
{
    while(!(UCSR0A & (1<<RXC0)));
    return UDR0;
}

void sendString(const char *str)
{
    while(*str != 0){
        sendChar(*str++);
    }
}
/*//Int Ring buffer
char getChar()
{
    char data = 0;
    if (readPointer != writePointer) {
        data = buff[readPointer++];
        if (readPointer >= SIZE) {
            readPointer = 0;
        }
    }
    return data;
}*/

char* receiveString(char *strBuf,int len)
{
    char temp = 0;
    int index = 0;
    while(((temp = receiveChar()) != 0x0D) && (index<len))
        {
            //sendChar(temp);//Echo
            strBuf[index++] = temp;
        }
    //*strBuf++ = '\0';
    return strBuf;
}
/*//No required causing additional problem
ISR(USART0_RX_vect)
{
    cli();
    buff[writePointer] = UDR0;
    if(buff[writePointer] != 0)
    {
        writePointer++;
        if (writePointer >= SIZE) {
            writePointer = 0;
        }
    }
    sei();
}*/