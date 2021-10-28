#include <avr/io.h>
#include <avr/interrupt.h>>
#include <util/delay.h>
#include <stdint.h>
#include <stdbool.h>


#define outLed 5



	ISR(INT0_vect){
				cli();
				PORTB &= ~(1 << outLed);
				sei();
}


int main(){
			PORTD |= (1 << 2);
			DDRB |= (1 << outLed);	
			EIMSK |= (1 << 0);
			EICRA |= (1<<0);
			sei();
			while(true){
			PORTB |= (1 << outLed);
			_delay_ms(5000);
			}

}
