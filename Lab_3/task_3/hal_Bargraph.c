#include <stdlib.h>
#include "hal_Bargraph.h"

#define MAX 4
#define MIN 1

typedef struct hal_BargraphDesc {

	uint8_t LedNumber;

}hal_BargraphDesc, *hal_Bargraph;


hal_Bargraph hal_Bargraph_New(uint8_t numberOfLeds) {
	hal_Bargraph b = (hal_Bargraph)malloc(sizeof(struct hal_BargraphDesc));
	if (numberOfLeds > MAX || numberOfLeds <MIN){
		free(b);
		b = NULL;
	} 
	else{
		
	hal_Bargrah_init(b);
	}
	return b;
}
void hal_Bargrah_init(hal_Bargraph _this, uint8_t numberOfLeds){
	_this-> LedNumber = numberOfLeds;

}
void hal_Bargraph_Set(hal_Bargraph _this, uint8_t ledID) {
	if(ledID > MAX || ledID <MIN) {
		return;
	}

}

void hal_Bargraph_Clear(hal_Bargraph _this, uint8_t ledID) {
	if(ledID > MAX || ledID <MIN) {
		return;
	}
}

uint8_t hal_Bargraph_GetNumberOfLeds(hal_Bargraph _this) {
	return _this->LedNumber;

}
void hal_Bargraph_Delete(hal_Bargraph _this){
	free(_this);

}

