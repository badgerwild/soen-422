#include "hal_Bargraph.h"
#include <stdbool.h>
// #include "hal_util_Bit.h"


void main(void){
// trsts a bar graph 
	hal_Bargraph b = hal_Bargraph_New(3); // 0 based indexing so 3 = 4 leds

	while(true){
// bar graph on
		for (uint8_t i = 0; i<= 3; ++i){
			hal_Bargraph_Set(b, i);
		}
// bar graph off
		for (uint8_t i = 0; i<=3;++i ){
			hal_Bargraph_Clear(b, i);
		}
		
	}

}
