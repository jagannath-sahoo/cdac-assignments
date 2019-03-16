#define F_CPU 16000000

#define LCD_DDR DDRA
#define LCD	PORTA
#define RS	PA0 //RS ClEAR for Instruction mode/SET for data mode
#define EN	PA2 // Starts for read/Write
//WR of LCD is gounded

#define FIRST_LINE	0x80
#define SECOND_LINE	0xC0
#define sbi(bit)	PORTA |= (1<<bit)
#define cli(bit)	PORTA &= ~(1<<bit)


#include<avr/io.h>
#include<util/delay.h>

void lcdInit();
/*
	Send LCD Command
	params:
		Instruction
	return: void
*/
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

int main()
{
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
	lcdString("Hello Manish!");
	lcdCursor(1,0);
	lcdString("I Love VLSI. Its mine.");
	while(1){
		lcdCmd(0x18);
		_delay_ms(250);	
	} 
	return 0;
}

void lcdInit()
{
//	LCD_DDR = 0xFF;	
	lcdCmd(0x28);//Function set, 2 Lines, Font 5x8 dots
	cli(RS);	
	enable();
}

void lcdCmd(unsigned char data)
{
	//Send higher nibble
	LCD = (data & 0xF0);
	cli(RS);
	enable();	
	//Send lower nibble
	data = data<<4;
	LCD = (data & 0xF0);
	cli(RS);
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
	cli(EN);
	_delay_ms(20);	
}

void lcdCursor(unsigned int x, unsigned int y)
{
	if(x == 0)	lcdCmd(0x80 | x);
	if(x == 1)	lcdCmd(0xC0 | y);
}
