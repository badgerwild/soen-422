#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdbool.h>

#define BaudRate9600 ((uint16_t)(103))

volatile char dataReceived;

int main(){

			DDRB |= (1<<5);	
			UBRR0H = (unsigned char) (BaudRate9600 >>8);
			UBRR0L = (unsigned char) BaudRate9600;
			UCSR0B = (1 << RXEN0) | (1 << TXEN0);
			UCSR0B |= (1 << RXCIE0);
			UCSR0C  = (3<<UCSZ00); 

			sei();

				while(true){
					if (dataReceived == '1'){
						PORTB |= (1<<5);
					}			
					else if (dataReceived == '0') {
						PORTB &= ~(1<<5);
					}
				}
}

ISR(USART_RX_vect){
	cli();
	dataReceived = (char)UDR0;
	sei();
}
