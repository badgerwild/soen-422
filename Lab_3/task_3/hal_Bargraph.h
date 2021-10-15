#ifndef __hal_Bargraph_h
#define __hal_Bargraph_h
#include <stdint.h>


struct hal_BargraphDesc;
typedef struct hal_BargraphDesc* hal_Bargraph;

hal_Bargraph hal_Bargraph_New(uint8_t numberOfLeds);
void hal_Bargrah_init(hal_Bargraph _this, uint8_t numberOfLeds);
void hal_Bargraph_Set(hal_Bargraph _this, uint8_t ledID);
void hal_Bargraph_Clear(hal_Bargraph _this, uint8_t ledID);
uint8_t hal_Bargraph_GetNumberOfLeds(hal_Bargraph _this);
void hal_Bargraph_Delete(hal_Bargraph _this);





#endif
