#include <avr/io.h>
#include<avr/interrupt.h>
#include "bsl_Usart.h"

#define BaudRate9600 ((uint16_t)(103))

volatile char dataReceived;
static bool initialized;

char bsl_Uart_RxChar(void){
// return contents of dataRecieved that is set in the ISR
// Hides implementation from the user 
		return dataReceived; 
}

void bsl_Uart_TxChar(char c) {
// not required
}

void bsl_Uart_Init(void) {
		if (!initialized) {
			// Set Baud rate in UBRR0H and UBRR0L
			UBRR0H = (unsigned char) (BaudRate9600 >>8);
			UBRR0L = (unsigned char) BaudRate9600;
			UCSR0B = (1 << RXEN0) | (1 << TXEN0); // enable reciving and transmission
			UCSR0B |= (1 << RXCIE0); // enable interrupt flag for recieving data
			UCSR0C  = (3<<UCSZ00); // 8 bit data, 1 stop bit
			initialized = true; // intiialization flag
		}
}

ISR(USART_RX_vect) {
	cli();
	dataReceived = (char)UDR0; // set dataRecieved to contents of recieving buffer
	sei();

}

