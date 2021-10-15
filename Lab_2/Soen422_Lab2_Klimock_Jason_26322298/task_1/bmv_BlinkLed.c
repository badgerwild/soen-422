// bmv_BlinkLed.c - Bare-Metal version of the BlinkLed.ino

#include <avr/io.h>
#include <util/delay.h>

# professor supplied code
int main() {
    DDRB |= (1 << 5);           // Set PB5 as an output

    while (1) {
        PORTB |= (1 << 5);      // Turn the LED on (set PB5's output).
        _delay_ms(4000);        // Wait a second.
        PORTB &= ~(1 << 5);     // Turn the LED off (clear PB5's output).
        _delay_ms(2000);        // Wait a second.
    }
    return 0;
}
