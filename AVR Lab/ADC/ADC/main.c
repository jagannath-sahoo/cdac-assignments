/*
 * ADC.c
 *
 * Created: 13-03-2019 14:28:01
 * Author : desd
 */ 

#define F_CPU 16000000

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


void initADC();

int main(void)
{	
	DDRC = 0xFF;
	PORTC = 0xFF;
	initADC();
    /* Replace with your application code */
    while (1) 
    {
		ADCSRA |= (1<<ADSC);
		//PORTC = 0x00;
		/*ADCSRA |= (1<<ADSC);
		
		while(!(ADCSRA &(1<<ADIF)));
		ADCSRA |= (1<<ADIF);
		PORTC = ~ADCH;*/
    }
}

void initADC()
{
	ADMUX |= (1<<REFS0) | (1<<ADLAR); //
	ADCSRA |= (1<<ADEN) | (1<<ADPS2) | (1<<ADPS1) | (1<<ADPS0) | (1<<ADIE);
	ADCSRA |= (1<<ADSC);
	sei();
}

ISR(ADC_vect)
{
	PORTC = ~ADCH;
	ADCSRA |= (1<<ADIF);
}