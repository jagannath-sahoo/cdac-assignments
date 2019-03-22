/*
 * UART.c
 *
 * Created: 12-03-2019 14:39:05
 * Author : desd
 */ 
#define F_CPU 16000000
#define BAUD 9600
#define UBRR_VALUE F_CPU/16/BAUD-1

#include <avr/io.h>
#include <util/delay.h>

void transmit(uint8_t c);
void uartInit();
uint8_t receive();


int main(void)
{
	uartInit();
	uint8_t ch;
	DDRD = 0xFF;
	PORTC = 0xFF;
	transmit('A');
	transmit('\n');
	
    /* Replace with your application code */
    while (1) 
    {
		/*ch = receive();
		_delay_ms(200);
		transmit(ch);
		PORTC = ch;*/
    }
}

void uartInit()
{
	//9600
	UBRR1H = ((UBRR_VALUE) >> 8);
	UBRR1L = UBRR_VALUE;
	//Enable Rx and Tx
	UCSR1B |= (1<<RXEN1) | (1<<TXEN1);
	//stop bit 1, No Parity
	UCSR1C &= ~(1<<USBS0) & ~(1<<UPM11) & ~(1<<UPM10);
	//8-bit
	UCSR1C |= (1<<UCSZ11) | (1<<UCSZ10);
}

void transmit(uint8_t c)
{
	while(!(UCSR1A & (1<<UDRE1)));
	UDR1 = c;
}

uint8_t receive()
{
	while(!(UCSR1A & (1<<RXC)));
	return UDR1;
}