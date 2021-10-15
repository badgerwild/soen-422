default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o TestLedCDS.bin TestLedCDS.c 
		avr-objcopy -O ihex TestLedCDS.bin TestLedCDS.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:TestLedCDS.hex:i
