#include <avr/io.h>
#include "bsl_Usart.h"

#include <stdint.h>
#include <stdbool.h>

volatile char dataReceived;

int main(){
DDRB |= (1 << 5); // LED config
bsl_Uart_Init();

while(true){
	char dataReceived = bsl_Uart_RxChar(); // get date from Rx buffer
// check for h to turn on l to turn off
	if (dataReceived == 'h') {
		PORTB |= (1 << 5); //turn LEd on
		
	}
	else if (dataReceived == 'l') {
		PORTB &= ~(1<<5); // turn LED off

	}

}

}
