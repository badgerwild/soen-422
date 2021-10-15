#include "LedCDS.h"
//LedCDS.h
//
#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

int main() {
	Led_init(); //constructs an Led struct, all data is hidden in the .h file
	while(true) {
		// call to the turn on and turn off functions define in the header
		Led_TurnOn(); 
		Led_TurnOff(); 
	}
    return 0;
}

