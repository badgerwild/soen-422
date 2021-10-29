default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o isr_pin_change.bin  isr_pin_change.c   
		avr-objcopy -O ihex isr_pin_change.bin isr_pin_change.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:isr_pin_change.hex:i
