default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o walk.bin walk.c 
		avr-objcopy -O ihex walk.bin walk.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:walk.hex:i
