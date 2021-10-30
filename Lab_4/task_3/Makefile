default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o isr_timer.bin  isr_timer.c   
		avr-objcopy -O ihex isr_timer.bin isr_timer.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:isr_timer.hex:i
