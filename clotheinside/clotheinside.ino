#include <Servo.h>

Servo myservo;  // create servo object to control a servo

  // analog pin used to connect the potentiometer
  // variable to read the value from the analog pin

void setup() {
  Serial.begin(9600);
  myservo.attach(16);
  pinMode(A0,INPUT);
    // attaches the servo on pin 9 to the servo object
}

void loop() {
       // scale it to use it with the servo (value between 0 and 180)
       int value=analogRead(A0);
       Serial.println(value);
       if(value<900)
       {
  myservo.write(180);                  // sets the servo position according to the scaled value
  delay(1000);
       }
       else
       {
  myservo.write(0);
  delay(1000);                 // waits for the servo to get there
       }
}
