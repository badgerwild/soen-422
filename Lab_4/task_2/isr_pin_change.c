#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdint.h>
#include <stdbool.h>


#define outLed 5



	ISR(PCINT0_vect){
				cli();
				if (PINB &= (1ul << 0)){
					PORTB &= ~(1ul << outLed);
				}
				else {
					PORTB |= (1ul << outLed);
				}
				sei();
}


int main(){
			PCMSK0 |= (1ul << 0);
			PCICR |= (1ul << 0);
			PORTD |= (1ul << 2);
			DDRB |= (1ul << outLed);
			DDRD |= (1ul << 2);
			sei();
			while(true){
				PORTD ^= (1ul << 2);

			_delay_ms(5000);
			}

}
