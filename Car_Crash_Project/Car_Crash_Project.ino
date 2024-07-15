const int trigPin = 5;
const int echoPin = 16;
const int flame = 4 ; // A2 is the analog pin 
// defines variables
long duration;
int distance;
void setup() {
  
  pinMode(13,OUTPUT);//led
  pinMode(4,INPUT);//flame
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  pinMode(14,OUTPUT);//buzzeer
  Serial.begin(9600); // Starts the serial communication
  
}
void loop() {
  // Clears the trigPin
  int f=digitalRead(4); // FIRE SENSOR 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  Serial.print("flame: ");
  Serial.println(f);
  delay(2000);
  if (distance<20)
  {
    digitalWrite(13,HIGH);
    delay(1000);
    if (f==0)
    {
      Serial.println("FIRE");
      digitalWrite(14,HIGH);
      delay(1000);
    }
    else
    {
      Serial.println("no fire");
      digitalWrite(14,LOW);
      delay(1000);
    }
    
  }
  else
  {
    digitalWrite(13,LOW);
  }


}
