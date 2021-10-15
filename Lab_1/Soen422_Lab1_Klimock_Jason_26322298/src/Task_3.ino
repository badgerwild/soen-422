///Jason Klimock 26322298
//Soen 422 Lab 1 
// task_3

const int ledPin = 10; //must be pin 3,5,6,9,10,11 for PWM
const int twoSecond = 2000;
const int max = 255;
const int step = 64; // step of 64 provides 0, 64, 128, 192 as value settings

void setup() {

    pinMode(ledPin, OUTPUT);
}

void loop() {

      for (int i = 0; i<=max; i+=step){
        analogWrite(ledPin, i);
        delay(twoSecond);// delay makes the change easier to see
        }
    }
  
