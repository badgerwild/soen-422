#include <stdlib.h>
#include <stdbool.h>
#include "LedADT.h"
//Definition of opaque type and pointer to  struct
typedef struct LedDesc {
    int digitalOutPin;
    bool isOn;
} LedDesc, *Led;

Led led; //instance of pointer to opaque type struct 
// initializer for Led struct, struct value passed to function so we can have more than one instance of the struct. 
void Led_Init(Led _this){
    _this-> digitalOutPin = 5; // set to onboard LEd
    _this-> isOn = false; //STATUS FLAG
    DDRB |= (1 << (_this->digitalOutPin)); // set onbard led as output
}
// Turn on led struct value passed to function so we can have more than one instance of the struct

void Led_TurnOn(Led _this){
    PORTB |= (1 << (_this->digitalOutPin)); // turn on led
    _delay_ms(1000);
    _this-> isOn = true;

}
// struct value passed to function so we can have more than one instance of the struct

void Led_TurnOff(Led _this){
    PORTB &= ~(1 << (_this->digitalOutPin));  // turn off led  
    _delay_ms(1000);
    _this-> isOn = false;

}
//constructor for Led struct
Led Led_New(void) {
    Led l = (Led) malloc(sizeof(struct LedDesc)); // Memory allocation of LedDesc struct cast as Led
    Led_Init(l); // call to constructor, for Led l
    return l; 
}
// struct value passed to function so we can have more than one instance of the struct

void Led_Delete(Led _this) {
    free(_this); // deleted Led struct and frees memory
}
