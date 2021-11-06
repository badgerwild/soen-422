#include "bsl_Usart.h"
#include <avr/io.h>

#define BaudRate9600 ((uint16_t)(103))

static bool initialized;

char bsl_Uart_RxChar(void){
	while (!(UCSR0A & (1<<RXC0))){}
	
			return (char)UDR0;

}

void bsl_Uart_TxChar(char c) {
}

void bsl_Uart_Init(void) {
				if (!initialized){
					UBRR0H = (unsigned char) (BaudRate9600 >>8);
					UBRR0L = (unsigned char) BaudRate9600;
					UCSR0B = (1 << RXEN0) | (1 << TXEN0);
					UCSR0C  = (3<<UCSZ00); 

				}

}

