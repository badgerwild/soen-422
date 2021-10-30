#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdint.h>
#include <stdbool.h>


#define outLed 5
#define F_CPU 16000000UL //16MHz cpu
#define time 0.004 //nterrupts at this time 

volatile uint16_t count = 0;
ISR(TIMER0_COMPA_vect){
    cli();
        count += 4;
        if (count == 500) {
            PORTB ^= (1ul << outLed);
           count = 0;
        }
    

    sei();
}

int main(){
    DDRB |= (1 << outLed); 
    TCCR0A |= (1 <<WGM01); 
    TCCR0B |= (1 << 2); // set prescaler to 256 by turning on bit 2 in the TCCR0B register
    TIMSK0 |= (1 << 1); //enable compare match register A with bit 1 
    OCR0A = (F_CPU / 256)* time;
    sei();
    while(true) {

    }
}
