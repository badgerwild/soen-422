#ifndef LedADT_h
#define LedADT_h
#include <stdbool.h>
#include <avr/io.h>
#include <util/delay.h>

struct LedDesc; //foward declaration of led struct, trick compiler
typedef struct LedDesc* Led; // Opaque type declaration
// declarations of fucntions
Led Led_New(void);
void Led_Init(Led _this);
void Led_TurnOn(Led _this);
void Led_TurnOff(Led _this);
void Led_Delete(Led _this);

#endif
