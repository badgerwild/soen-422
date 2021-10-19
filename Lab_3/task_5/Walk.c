#include <stdbool.h>
#include "hal_Bargraph.h"
#include "bsl_ports_walk.h"
//Works by "pushing the button", which means just touching pin D12 to the ground 

int main(){

	hal_Bargraph b = hal_Bargraph_New(2); // uses 0 based indexing so 3 == 4 leds
	InPut = 0; //make sure every port in this range is set to off
	InPut = hal_util_Bit_Set(InPut, On); // set the led as output
	InPort = 0;// set all PINB to off
	InPort = hal_util_Bit_Set(InPort, Switch); // enable pull up to turn on the switch

while(true){
	//checks if pin D12 is connected to ground, if so does walk for 10 seconds the rapid flash
		if (!(hal_util_Bit_switch(SwitchPin, Switch))){
			// walk cycle
					for(uint8_t j =0; j<3; ++j){ // about 10 seconds for the loop
						InPort = hal_util_Bit_Set(InPort, On); // Turn onboard led on
						for (uint8_t i = 0; i <=3; ++i){
						hal_Bargraph_Set(b, i); 
					}
					for (uint8_t i = 0; i <=3; ++i){
						hal_Bargraph_Clear(b, i);
					}
					}
					//flash cycle
					for(uint8_t i =0; i<3;++i){	

						//will flash the button
							hal_Bargraph_Flash(b, 0,1,2);
							hal_Bargraph_Clear(b, 0);
							hal_Bargraph_Clear(b, 1);
							hal_Bargraph_Clear(b, 2);
						}
		}
		else { // default for when the walk cycle is complete.
					InPort = hal_util_Bit_Clear(InPort, On); // turn onboard Led Off


		}

	}
		
	
}








