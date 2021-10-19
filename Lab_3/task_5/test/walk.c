#include <avr/io.h>
#include <stdbool.h>

bool con(uint8_t value, uint8_t bit){
	return ((value) &(1U << bit ));
}


int main(){
DDRB =0;
DDRB |= (1UL << 5);
PORTB = 0;
PORTB |= (1U <<4 );



while(true) {
		if( con(PINB, 4))
    {
        // if bit PINB4 is set, the button is not pressed
        PORTB &= ~  (1UL << 5); // turn off led
    }
    else
    {
        PORTB |= (1UL << 5); // turn off led
    }

}}

