#include "LedADT.h"
#include <stdbool.h>

int main(){
    Led led = Led_New(); // instance of Led ADT

    while(true){
    //    test of functions
        Led_TurnOn(led);
        Led_TurnOff(led);
    }

    Led_Delete(led);
    return 0;


}

