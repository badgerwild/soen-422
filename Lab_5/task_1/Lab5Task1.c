#include <avr/io.h>
#include "bsl_Usart.h"

#include <stdint.h>
#include <stdbool.h>

volatile char dataReceived;

int main(){
//TODO config LEd
//
DDRB |= (1 << 5);
bsl_Uart_Init();

while(true){
	char dataReceived = bsl_Uart_RxChar();

	if (dataReceived == 'h') {
		PORTB |= (1 << 5);
		
	}
	else if (dataReceived == 'l') {
		PORTB &= ~(1<<5);

	}

}

}
