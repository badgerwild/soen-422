#include <stdlib.h>
#include "hal_Bargraph.h"
// include only one of the two hal utils
//#include "hal_util_Bit.h"
#include "hal_util_BitMacros.h"
#include "bsl_ports.h"
#define MAX 3
#define MIN 0

typedef struct hal_BargraphDesc {

	uint8_t LedNumber;
	// max number of Led is 4 so array of size four is allocated
	uint8_t LedPins[4];

}hal_BargraphDesc, *hal_Bargraph;


hal_Bargraph hal_Bargraph_New(uint8_t numberOfLeds) {
	hal_Bargraph b = (hal_Bargraph)malloc(sizeof(struct hal_BargraphDesc));
// Check to make sure number of leds are in correct rance 1..4, if not return Null
	if (numberOfLeds > MAX || numberOfLeds <MIN){
		free(b);
		b = NULL;
	} 
	else{
	// initialize bargraph if number of leds is correct	
		hal_Bargrah_init(b, numberOfLeds);
	}
	return b;
}

// intitialize bargraph, since number of Led is validatred in the correct range this function will only initialize and use that many leds 
// that are defined in bsl_ports.h
void hal_Bargrah_init(hal_Bargraph _this, uint8_t numberOfLeds){
	_this-> LedNumber = numberOfLeds;
	for (uint8_t i =0 ; i<= numberOfLeds; ++i){
		_this-> LedPins[i] = board_pins[i];
	}
	for (uint8_t i =0 ; i<= numberOfLeds; ++i) {
		LedOut = hal_util_Bit_Set(LedOut, (_this->LedPins[i]));
			}
}

void hal_Bargraph_Set(hal_Bargraph _this, uint8_t ledID) {
	// validate that ledID is within correct range
	if(ledID > MAX || ledID <MIN) {
	 	return;
	}
	else{
			LedPort = hal_util_Bit_Set(LedPort, (_this->LedPins[ledID]));
				WaitOneSec;

	}

}

void hal_Bargraph_Clear(hal_Bargraph _this, uint8_t ledID) {
	// validates that led is in correct range
	if(ledID > MAX || ledID <MIN) {
		return;
	}
	else {
		LedPort = hal_util_Bit_Clear(LedPort, (_this->LedPins[ledID]));
		WaitOneSec;

	}
}

uint8_t hal_Bargraph_GetNumberOfLeds(hal_Bargraph _this) {
	return _this->LedNumber;

}
void hal_Bargraph_Delete(hal_Bargraph _this){
	free(_this);

}

