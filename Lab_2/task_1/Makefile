default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o bmv_BlinkLed.bin bmv_BlinkLed.c 
		avr-objcopy -O ihex bmv_BlinkLed.bin bmv_BlinkLed.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:bmv_BlinkLed.hex:i
