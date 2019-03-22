avr-gcc -Wall -g -Os -mmcu=atmega64 -o main_uart.bin main_uart.c
avr-objcopy -j .text -j .data -O ihex main_uart.bin main_uart.hex

