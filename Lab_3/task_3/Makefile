default:
		avr-gcc -Wall -DF_CPU=16000000UL -mmcu=atmega328p -o test_hal_bargraph.bin test_hal_bargraph.c hal_Bargraph.c
		avr-objcopy -O ihex test_hal_bargraph.bin test_hal_bargraph.hex
		sudo avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -D -U flash:w:test_hal_bargraph.hex:i
