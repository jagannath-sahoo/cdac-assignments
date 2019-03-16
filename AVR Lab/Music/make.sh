avr-gcc -Wall -g -Os -mmcu=atmega64 -o music.bin music.c
avr-objcopy -j .text -j .data -O ihex music.bin music.hex

