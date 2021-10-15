///Jason Klimock 26322298
//Soen 422 Lab 1 
// task_2

const int ledPin = 9; //Standard digital pin, connect to LED
const int inPin = 3;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(inPin, INPUT_PULLUP);//INPUT_PULLUP reads a powered off pin as high and a powered on pin as low  
}

void loop() {
    int inValue = digitalRead(inPin);
    digitalWrite(ledPin, inValue);
    }
  
