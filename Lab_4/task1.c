#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

ISR(INT0_vect)
{
    cli();
    PORTB &= ~(1 << 5);
    sei();
}

int main(void)
{
    DDRB |= (1 << 5);  // Set PB5 as an output
    PORTB |= (1 << 5); // Turn on LED

    EICRA |= (1 << 0); // Enable ISC00
    EIMSK |= (1 << 0); // Enable INT0

    // DDRD &= ~(1 << 2); // Set D2 to input
    PORTD |= (1 << 2); // Set D2 to pullup

    sei();

    while (1)
    {
        PORTB |= (1 << 5);
        _delay_ms(5000);
    }

    return 0;
}

