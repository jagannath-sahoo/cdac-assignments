/*
 * SmartHomeExam.c
 *
 * Created: 25-03-2019 07:20:43
 * Author : JAGANNATH SAHOO PRN(190240130033)
 */ 
#define F_CPU 16000000
#define BAUD 9600
#define BAUD_VALUE F_CPU/16/BAUD - 1
#define SIZE 64

#define USERID		"CDAC"
#define PASSWORD	"ACTS123"
#define COMMAND		"LIGHT ON"

#include <avr/io.h>
#include<stdio.h>
#include<stdlib.h>
#include <util/delay.h>
#include <string.h>

char dataBuff[32];
char userBuff[10];
char passBuff[10];

void initUART();
void sendChar(char data);
char receiveChar();
char* receiveString(char *strBuf,int len);
void sendString(const char *str);
char getChar();

int main()
{
    DDRC = 0xFF;//Set PortC as OUTPUT
    PORTC = 0xFF;//Pull up High
		
    initUART();
    
    sendString("Welcome to Smart Home\r\n");
	
	sendString("Username:\r\n");
	receiveString(userBuff,10);
	
	sendString("Password:\r\n");
	receiveString(passBuff,10);
	
	while(1){
		if (strcmp(USERID,userBuff) == 0)//Check username
		{
			if (strcmp(PASSWORD,passBuff) == 0)//check password
			{
				sendString("Login Successful\r\n");
				receiveString(dataBuff,32);
				if (strcmp(dataBuff,COMMAND) == 0)//Verify command
				{
					PORTC = 0x00;//Set Led High
				}
			}
		}
	}
}

void initUART()
{
	//9600N81
    UBRR1H = (BAUD_VALUE) >> 8;
    UBRR1L = BAUD_VALUE;
    UCSR1B |= (1<<TXEN1) | (1<<RXEN1);//Enable RX and TX
    UCSR1C |= (1<<UCSZ11) | (UCSZ10);//8 bit
}

void sendChar(char data)
{
    if(data != 0)
    {
        while(!(UCSR1A & (1<<UDRE1)));//Check for Empty
        UDR1 = data;
    }
}

char receiveChar()
{
    while(!(UCSR1A & (1<<RXC1)));//Check for Receive Complete
    return UDR1;
}

void sendString(const char *str)
{
    while(*str != 0){
        sendChar(*str++);
    }
}

char* receiveString(char *strBuf,int len)
{
    char temp = 0;
    int index = 0;
    while(((temp = receiveChar()) != 0x0D) && (index<len))
    {
	    strBuf[index++] = temp;
    }
    return strBuf;
}