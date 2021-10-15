///Jason Klimock 26322298
//Soen 422 Lab 1 
// task_4

const int ledPin = 10;//must be pin 3,5,6,9,10,11 for PWM
const int twoSecond = 2000;
const int max = 255;
const int step = 64; // Step of 64 give 4 values 0, 64, 128, 192 

void setup() {

    pinMode(ledPin, OUTPUT);
    Serial.begin(9600); //set Baud rate to match serial monitor
    Serial.print("Starting Led brightness test");
}

void loop() {
   for (int i = 0; i<=max; i+=step){
        Serial.print("Led brightness is: ");
        Serial.println(i);
        analogWrite(ledPin, i);
        delay(twoSecond);
   }
}
        

        
      
    
      
   
 
