avr-gcc -Os -Wall -DF_CPU=16000000UL -mmcu=atmega328p bmv_BlinkLed.c -o bmv_BlinkLed.o
avr-objcopy -O ihex -j .text -j .data bmv_BlinkLed.o  bmv_BlinkLed.hex
avrdude -c arduino -p atmega328p -b 57600 -P COM5 -D -Uflash:w:bmv_BlinkLed.hex:i
pause
