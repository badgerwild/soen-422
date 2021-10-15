#include <stdio.h>
#define LedDigitalOutPin 5

typedef struct {
    int digitalOutPin;
}Led;

Led led;
int main() {
    led.digitalOutPin = LedDigitalOutPin;
    printf("WTF %d\n", led.digitalOutPin);
    return 0;
}
