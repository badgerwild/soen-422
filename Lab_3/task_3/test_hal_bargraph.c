#include "hal_Bargraph.h"
#include <stdbool.h>
// #include "hal_util_Bit.h"


void main(void){

	hal_Bargraph b = hal_Bargraph_New(3);

	while(true){

		for (uint8_t i = 0; i<= 3; ++i){
			hal_Bargraph_Set(b, i);
		}

		for (uint8_t i = 0; i<=3;++i ){
			hal_Bargraph_Clear(b, i);
		}
		

		
	}

		
//TODO get the other functions working in the test!!! and Get Macros working too!!



}
