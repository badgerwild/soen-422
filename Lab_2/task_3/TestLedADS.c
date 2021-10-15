#include<stdbool.h>
#include "LedADS.h"

int main(){
    while(true){
        // test of functions defined in LedADS.c and LedADS.h
        Led_init(); //constructor 
        Led_TurnOn(); // blink on 
        Led_TurnOff(); // blink off
    }


}
