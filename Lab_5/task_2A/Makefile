# make file for Manjaro
default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o Lab5Task2WithoutBSL.bin  Lab5Task2WithoutBSL.c   
		avr-objcopy -O ihex Lab5Task2WithoutBSL.bin Lab5Task2WithoutBSL.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:Lab5Task2WithoutBSL.hex:i
