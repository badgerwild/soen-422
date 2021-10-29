default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o task1.bin  task1.c   
		avr-objcopy -O ihex task1.bin task1.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:task1.hex:i
