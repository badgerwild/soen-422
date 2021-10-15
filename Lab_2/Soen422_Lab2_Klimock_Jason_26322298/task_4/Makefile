default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o TestLedADT.bin TestLedADT.c LedADT.c 
		#avr-gcc -o TestLedADT.bin TestLedADT.o
		#avr-objcopy -O ihex -R .eeprom TestLedADT.bin TestLedADT.hex
		avr-objcopy -O ihex TestLedADT.bin TestLedADT.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:TestLedADT.hex:i
