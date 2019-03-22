avr-gcc -Wall -g -Os -mmcu=atmega64 -o lcdDemo.bin lcdDemo.c
avr-objcopy -j .text -j .data -O ihex lcdDemo.bin lcdDemo.hex

