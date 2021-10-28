default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o isr.bin  isr.c   
		avr-objcopy -O ihex isr.bin isr.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:isr.hex:i
