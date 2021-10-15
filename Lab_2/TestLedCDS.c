#include "LedCDS.h"
//LedCDS.h
//
#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>
//#include <stdio.h>

int main() {
	Led_init();
	while(true) {
		Led_TurnOn();
		Led_TurnOff();
	}
    return 0;
}

