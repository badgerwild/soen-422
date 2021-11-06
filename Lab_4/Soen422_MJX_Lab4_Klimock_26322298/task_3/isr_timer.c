#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdint.h>
#include <stdbool.h>


#define outLed 5
#define F_CPU 16000000UL //16MHz cpu clock speed
#define time 0.004 //interrupts at 4 ms

volatile uint16_t count = 0; // global volatile counter varaible
ISR(TIMER0_COMPA_vect){// pass in timer/counter0 compare match A vector
    cli();// diabale interrupts
        count += 4;//increment counter by 4 ms 
        if (count == 500) { // .5 seconds 
            PORTB ^= (1ul << outLed); // toggle led on or off to make it blink
           count = 0; // reset counter 
        }
    sei();// enable interrupts
}

int main(){
    DDRB |= (1 << outLed);  // set onboard LED as output
    TCCR0A |= (1 <<WGM01);// set bit 1 of Timer/ counter control register A to 1, enables CTC  
    TCCR0B |= (1 << CS02); //Set bit 2 to 1 Select clock source for timer/counter with 256 prescaler 
    TIMSK0 |= (1 << OCIE0A); //enable compare match register A for timer/counter0 by setting bit 1 
    OCR0A = (F_CPU / 256)* time; // Set timer/counter0 output compare register 
    sei(); // interupts
    while(true) {

    }
}
