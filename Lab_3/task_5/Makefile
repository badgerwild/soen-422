default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o Walk.bin  Walk.c hal_Bargraph.c  
		avr-objcopy -O ihex Walk.bin Walk.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:Walk.hex:i
