///Jason Klimock 26322298
//Soen 422 Lab 1 
// task_5

const int ledPin = 10; 
const int oneSecond = 1000;
const int off = 0;
int brightness = 64; //default value is set to 64 when program starts

void setup() {

    pinMode(ledPin, OUTPUT);
    Serial.begin(9600); // Set baud rate to match serial monitor
    Serial.println("ready");
    Serial.println("Enter a value between 0 and 255 to set brightness of LED");
}

void loop() {
  
    if (Serial.available() > off){ //Checks if number of bytes coming from serial is greater than 0
       brightness = Serial.parseInt();
       Serial.print("LED level is: ");
       Serial.println(brightness);
    }
        analogWrite(ledPin, brightness);
        delay(oneSecond);
        analogWrite(ledPin, off);// for the blink function
        delay(oneSecond);    
    }

     
      
    
   
      
   
 
