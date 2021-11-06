#include <avr/io.h>
#include <avr/interrupt.h>
#include "bsl_Usart.h"

int main(){

	DDRB |= (1<<5);// set LED to output
	cli();
	bsl_Uart_Init(); // initialize UART
	sei();
	while (true){
		char dataReceived = bsl_Uart_RxChar(); // get input data 
		if (dataReceived == '1'){
			PORTB |= (1<<5); // turn on LED
		}			
		else if ( dataReceived == '0') {
			PORTB &= ~(1<<5); // turn off LED
		}
	}
}
