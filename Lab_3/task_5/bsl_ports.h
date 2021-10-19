#ifndef __bsl_ports_h
#define __bsl_ports_h

#include <avr/io.h>
#include <util/delay.h>
// Contains defintions for an arduino nano implementation of Bargraph using max four pins

#define LedOut DDRD // set pins as out
#define LedPort PORTD // D port pins
#define WaitOneSec _delay_ms(500) // wait long
#define WaitSec _delay_ms(150) // wait short
uint8_t board_pins[] = {3, 4, 5, 6}; // led pins D3-D4


#endif
