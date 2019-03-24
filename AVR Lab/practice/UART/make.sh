avr-gcc -Wall -g -Os -mmcu=atmega64 -o uart.bin uart.c
avr-objcopy -j .text -j .data -O ihex uart.bin uart.hex