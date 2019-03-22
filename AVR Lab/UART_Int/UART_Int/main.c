/*
 * UART_Int.c
 *
 * Created: 13-03-2019 11:13:26
 * Author : desd
 */ 
#define F_CPU 16000000
#define SIZE	64
#define BAUD	9600
#define UBRR_VALUE  F_CPU/16/BAUD -1

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


volatile char buff[SIZE] = { 0 };
uint8_t writePointer = 0;
uint8_t readPointer = 0; 

void initUART();
void uart1Send(unsigned char data);
char uart1Receive();
void sendString(char *c); 


int main(void)
{
    
	char ch = 0;
	DDRC = 0xFF;
	PORTC = 0xFF;	
	//PORTC &= ~(1<<PC5);
	initUART();
	_delay_ms(1000);
	sendString("Hello World!\r\n");	
    while (1) 
    {
		ch = uart1Receive();
		/*ch = uart1Receive();*/
		_delay_ms(20);
		uart1Send(ch);
		//sendString(buff);
    }
}

void sendString(char *c)
{
	while (*c != 0)
	{
		uart1Send(*c);
		c++;
	}
}

void initUART()
{
		UBRR1H = ((UBRR_VALUE) >> 8);
		UBRR1L = UBRR_VALUE;
		UCSR1B |= (1<<RXEN1) | (1<<TXEN1) | (1<<RXCIE1);//RX interrupt activated
		UCSR1C |= (1<<UCSZ11) | (1<<UCSZ10);
		sei();
}

void uart1Send(unsigned char data)
{
	if (data != 0)
	{
		while(!(UCSR1A & (1<<UDRE1)));
		UDR1 = data;
	}
	
}

char uart1Receive()
{
	char data = 0;
	if(writePointer != readPointer)
	{
		data = buff[readPointer++];
		if (readPointer >=  SIZE)
		{
			readPointer = 0;
		}
	}
	return data;
}


ISR(USART1_RX_vect)
{
	cli();
	buff[writePointer] = UDR1;
	PORTC &= ~(1<<PC5);
	if (buff[writePointer] != 0)
	{
		writePointer++;
		if (writePointer >= SIZE)
		{
			writePointer = 0;
		}
	}
	sei();
}