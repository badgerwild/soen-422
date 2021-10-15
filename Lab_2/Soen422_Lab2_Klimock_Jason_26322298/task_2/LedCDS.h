//LedCDS.h
//
#ifndef LEDCDS_H
#define LEDCDS_H

#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#define LedDigitalPin 5 // set bit shift amount

// define the led as a struct
typedef struct {
				int digitalOutPin; // to set digitalOutPin
				bool status; // flag for LED status, ture for on, false for off
} Led;

Led led; // declare instance of Led

// constructor for led
void Led_init(void) {
	// set the figital pin number on int the Led struct to the in built led value
	led.digitalOutPin = LedDigitalPin;
	 //set the DDRB as the built in LED
	DDRB |= (1 << (led.digitalOutPin));}

void Led_TurnOn(void) {
	PORTB |= (1 << (led.digitalOutPin)); //Or bit shift operator turn s on the built in led
	led.status = true; // set status flag
	_delay_ms(1000);

}

void Led_TurnOff(void) {
	PORTB &= ~(1 << (led.digitalOutPin)); //And operator negates any set bits at the pin value from the Led struct
	led.status = false; // set led status to off
	_delay_ms(1000);
}

#endif
