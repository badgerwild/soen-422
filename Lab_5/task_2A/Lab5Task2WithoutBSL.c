#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdbool.h>

#define BaudRate9600 ((uint16_t)(103)) // Baud rate macro

volatile char dataReceived; // volatile to stop compiler optimizations

int main(){

			DDRB |= (1<<5);	// Set LED as output
			// Set BAud rate with UBBR0H and UBBR0L
			UBRR0H = (unsigned char) (BaudRate9600 >>8);
			UBRR0L = (unsigned char) BaudRate9600;
			UCSR0B = (1 << RXEN0) | (1 << TXEN0);// enable send and transmit
			UCSR0B |= (1 << RXCIE0); // enable interrupt flag for recieving data
			UCSR0C  = (3<<UCSZ00); // 8 bit data, 1 stop bit

			sei();

				while(true){
					if (dataReceived == '1'){
						PORTB |= (1<<5); //turn LED on 
					}			
					else if (dataReceived == '0') {
						PORTB &= ~(1<<5); // turn LED off
					}
				}
}

ISR(USART_RX_vect){  
	cli();
	dataReceived = (char)UDR0; // recieve data from input 
	sei();
}
