#include "LedADS.h"
#include <stdbool.h>

// strut def of Led, digitalOutPin will be set as output pin, and staut is an optional flag indicating if Led is on
typedef struct {
    int digitalOutPin;
    bool status;
} Led;

static Led led; \\ Led struct declared as private


void Led_init(void){
    led.digitalOutPin = 5; // Digital out pin set to target onboard led
    DDRB |= (1 << (led.digitalOutPin)); // DDRB set output to the digitalOutPin in the Led struct
}
void Led_TurnOn(void){
    PORTB |= (1 << (led.digitalOutPin)); // turns on onboard led
    led.status = true; // status flag
    _delay_ms(1000);
}
void Led_TurnOff(void){
    PORTB &= ~(1 << (led.digitalOutPin)); // turns off led pin, by setting the bit at digitalout pin position to 0
    led.status = false; // status flag
    _delay_ms(1000);

}


