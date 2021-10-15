//LedCDS.h
//
#ifndef LEDCDS_H
#define LEDCDS_H

#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#define LedDigitalPin 5

typedef struct {
				int digitalOutPin;
				bool status;
} Led;
Led led;


void Led_init(void) {
	led.digitalOutPin = LedDigitalPin;
	DDRB |= (1 << (led.digitalOutPin));
}

void Led_TurnOn(void) {
	PORTB |= (1 << (led.digitalOutPin));
	led.status = true;
	_delay_ms(1000);

}

void Led_TurnOff(void) {
	PORTB &= ~(1 << (led.digitalOutPin));
	led.status = true;
	_delay_ms(1000);
}

#endif
