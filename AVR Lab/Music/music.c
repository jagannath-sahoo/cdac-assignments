#define F_CPU 16000000

#define BUZ	PA3

#define HIGH	PORTA |= (1<<PA3);
#define LOW	    PORTA &= ~(1<<PA3);

#include<avr/io.h>
#include<util/delay.h>
 

void Delayms(long int x);
void playTone(int tone,long int duration);
void playNote(char note, long int duration);

int main()
{
	DDRA |= (1<<BUZ);
	PORTA &= ~(1<<BUZ);
	DDRC = 0xFF;
	PORTC = 0xFF;
	int length = 11;
	char notes[] = "ccggaagffeeddc ";
	int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
	int tempo = 280; 
	while(1)
	{
		PORTC = ~PINC;
		//_delay_us(1000000);
		//Delayms(1000000);
		for(uint16_t i = 0; i < length; i++)
		{
			if(notes[i] == ' ')
			{
				Delayms(beats[i] * tempo);
			}
			else
			{
				playNote(notes[i], beats[i] * tempo);
			}
			Delayms(tempo/2);
		}
		
	}
	return 0;
}

void playTone(int tone,long int duration)
{
	for(uint16_t i = 0; i < (duration * 1000L); i+= tone * 2)
	{
		HIGH;
		Delayms(tone);
		LOW;
		Delayms(tone);
	}
}

void playNote(char note, long int duration)
{
	char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  	int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
	for(uint8_t i = 0; i < 8;i++)
	{
		if(names[i] == note)
		{
			playTone(tones[i],duration);
		}
	}
}

void Delayms(long int x)
{
	for(long int i = 0; i < x; i++) 
	{
		_delay_us(1);
	}
}