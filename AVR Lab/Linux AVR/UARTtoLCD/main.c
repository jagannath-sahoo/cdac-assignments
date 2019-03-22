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

/*LCD*/
#define LCD_DDR DDRA
#define LCD	PORTA
#define RS	PA0 //RS ClEAR for Instruction mode/SET for data mode
#define EN	PA2 // Starts for read/Write
//WR of LCD is gounded

#define FIRST_LINE	0x80
#define SECOND_LINE	0xC0
#define sbi(bit)	PORTA |= (1<<bit)
#define CLI(bit)	PORTA &= ~(1<<bit)
/***************/


volatile char buff[SIZE] = { 0 };
uint8_t writePointer = 0;
uint8_t readPointer = 0; 

void initUART();
void uart1Send(unsigned char data);
char uart1Receive();
void sendString(char *c); 
/****LCD****/
void lcdInit();
void lcdCmd(unsigned char data);
/*
	Send LCD String data
	params:
		data
	return: void
*/
void lcdData(unsigned char data);
/*
	Send String to lcd
	params:
		String type arguments
	return: void
*/
void lcdString(char *str);
/*
	Send Enable...
*/
void enable();
void lcdCursor(unsigned int x, unsigned int y);
/***********/

int main(void)
{
    
	char ch = 0;
	DDRC = 0xFF;
	PORTC = 0xFF;	
	//PORTC &= ~(1<<PC5);
	initUART();
	_delay_ms(1000);
	sendString("UART TO LCD\r\n");

    /**LCD**/
    DDRC = 0xFF;
	PORTC = 0xFF;
	DDRA = 0xFF;
	lcdInit();
	lcdCmd(0x14);// Cursor shift,Shift to write
	lcdCmd(0x06);//Increment,Accompanies display shift
	lcdCmd(0x0F);//Display ON,Cursor ON, Blink ON
	lcdCmd(0x01);//Clear Display
	lcdCmd(0x80);//Set DDRAM
	//lcdData('A');
	lcdCmd(0x01);//Clear Display
    /*******/	
    while (1) 
    {
		ch = uart1Receive();
		/*ch = uart1Receive();*/
		_delay_ms(20);
		uart1Send(ch);
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            lcdData(ch);
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
		UBRR0H = ((UBRR_VALUE) >> 8);
		UBRR0L = UBRR_VALUE;
		UCSR0B |= (1<<RXEN0) | (1<<TXEN0) | (1<<RXCIE0);//RX interrupt activated
		UCSR0C |= (1<<UCSZ01) | (1<<UCSZ00);
		sei();
}

void uart1Send(unsigned char data)
{
	if (data != 0)
	{
		while(!(UCSR0A & (1<<UDRE0)));
		UDR0 = data;
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


void lcdInit()
{
//	LCD_DDR = 0xFF;	
	lcdCmd(0x28);//Function set, 2 Lines, Font 5x8 dots
	CLI(RS);	
	enable();
}

void lcdCmd(unsigned char data)
{
	//Send higher nibble
	LCD = (data & 0xF0);
	CLI(RS);
	enable();	
	//Send lower nibble
	data = data<<4;
	LCD = (data & 0xF0);
	CLI(RS);
	enable();
}

void lcdData(unsigned char data)
{
	//Send higher nibble
	LCD = (data & 0xF0);
	sbi(RS);
	enable();	
	//Send lower nibble
	data = data<<4;
	LCD = (data & 0xF0);
	sbi(RS);
	enable();
}

void lcdString(char *str)
{
	while(*str != 0)
	{
		lcdData(*str++);
	}
}

void enable()
{
	sbi(EN);
	_delay_ms(20);
	CLI(EN);
	_delay_ms(20);	
}

void lcdCursor(unsigned int x, unsigned int y)
{
	if(x == 0)	lcdCmd(0x80 | x);
	if(x == 1)	lcdCmd(0xC0 | y);
}

ISR(USART0_RX_vect)
{
	cli();
	buff[writePointer] = UDR0;
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