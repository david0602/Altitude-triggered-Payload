#include <NewPing.h>

#include <Servo.h>

#define TRIGGER_PIN 6
#define ECHO_PIN 7
#define MAX_DISTANCE 200
int i=1;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.
Servo servo1; 
void setup() {
   Serial.begin(9600);
     if (i=1)
  {
    delay(15000);
    i=0;
  }
}
 
void loop() {

   delay(500);
   unsigned int uS = sonar.ping_cm();
   Serial.print(uS);
   Serial.println("cm");
     
  
    if (uS < 90)
    {
      servo1.attach(13);
    }
    if (uS>90 || uS==90)
    {
     servo1.detach();
    }
  
 
}
