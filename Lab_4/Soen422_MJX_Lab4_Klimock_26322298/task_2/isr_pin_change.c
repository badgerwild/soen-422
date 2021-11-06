#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdint.h>
#include <stdbool.h>


#define outLed 5


// interrupt service routine on pin switch
	ISR(PCINT0_vect){ //vector corresponds to bit 0 of PCMSKO register
				cli(); // disable interrupts
				if (PINB &= (1ul << 0)){ // if pin D8 not connected to 2 turn off LED, else turn on
					PORTB &= ~(1ul << outLed);
				}
				else {
					PORTB |= (1ul << outLed);
				}
				sei(); // enable interrupts
}


int main(){
			PCMSK0 |= (1ul << PCINT0);// set bit 0 to 1 pin change mask register, enables interrupts on i/o pin 0
			PCICR |= (1ul << PCIE0); // Set bit 0 to 1 on pinchange interrupt control register, enables pin change interrupts 
			DDRB |= (1ul << outLed); //turn on LED
			DDRD |= (1ul << 2); // enable pullup register on PD2
			sei(); // enable interrupts
			while(true){
				PORTD ^= (1ul << 2); // toggle PD2
				_delay_ms(1000); // delay 1 second on toggle
			}

}
