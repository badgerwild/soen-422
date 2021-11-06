# make file for Manjaro
default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o Lab5Task1.bin  Lab5Task1.c bsl_UsartByPolling.c  
		avr-objcopy -O ihex Lab5Task1.bin Lab5Task1.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:Lab5Task1.hex:i
