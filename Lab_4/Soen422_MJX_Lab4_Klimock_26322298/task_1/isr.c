#include <avr/io.h>
#include <avr/interrupt.h>>
#include <util/delay.h>
#include <stdint.h>
#include <stdbool.h>


#define outLed 5


//Define Interrupt service routine. 
	ISR(INT0_vect){ // INT) vector corresponds to interupts enabled by bit 0 of the EIMSK register
				cli(); // disable interrupts
				PORTB &= ~(1 << outLed); // turn off led
				sei(); // enable interrupts
}


int main(){
			PORTD |= (1 << 2); // enable pullup on PORTD
			DDRB |= (1 << outLed);	// Set onboard LED as output
			EIMSK |= (1 << INT0); // Set bit 0 of the external interrupt mask register to 1, enables interrupts 
			EICRA |= (1<<ISC00);// Set bit 0 to 1 on External interrupt control register A, Looks for INT0 interrupts
			sei(); // enable interrupts 
			while(true){
			PORTB |= (1 << outLed); // turn on LED
			_delay_ms(5000); // 5 second delay
			}

}
