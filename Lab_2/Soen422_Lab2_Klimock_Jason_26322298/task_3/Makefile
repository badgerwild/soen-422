default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o TestLedADS.bin TestLedADS.c LedADS.c
		avr-objcopy -O ihex TestLedADS.bin TestLedADS.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:TestLedADS.hex:i
