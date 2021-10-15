//Jason Klimock 26322298
//Soen 422 Lab 1 
//task 1

const int ledPin = 13;
const int inPin = 6;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(inPin, INPUT_PULLUP);//INPUT_PULLUP reads a powered off pin as high and a powered on pin as low  
    }

void loop() {
    int inValue = digitalRead(inPin); 
      digitalWrite(ledPin, inValue); //logical inverter is taken care of with the use of INPUT_PULLUP
}
