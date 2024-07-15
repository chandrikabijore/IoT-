const  int trigpin=10;
const int ecopin=9;
#include <Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12,INPUT);//flame
  pinMode(13,INPUT);//ir
  pinMode(11,INPUT);//ldrpin
  pinMode(8,OUTPUT);//buzzer
  pinMode(6,OUTPUT);//led-r
  myservo.attach(7);//motor
}

void loop() 
{
  // put your main code here, to run repeatedly:
digitalWrite(trigpin,LOW);
delay(2000);
digitalWrite(trigpin,HIGH);
delay(10000);
long duration=pulseIn(ecopin,HIGH);
int dist=duration*0.034/2;
Serial.print("distance:");
Serial.println(dist);

int flame=digitalRead(12);
int rangeir=digitalRead(13);
int ldrpin=analogRead(11);
Serial.print("flame:");
Serial.println(flame);
Serial.print("IR:");
Serial.println(rangeir);
if(ldrpin<=80)//raaat
{
 digitalWrite(6,HIGH);//led-r
 delay(1000);
}
else
{
  if(rangeir==1)
  {
    digitalWrite(6,HIGH);//led-r
    delay(1000);
  }
 else
 {
   digitalWrite(6,LOW);//led-r
   delay(1000);
 }
}
if(dist<20)
{
 myservo.write(180);
 delay(1000);
}
else
{
  myservo.write(0);
  delay(1000);
}

int F = HIGH;
{
  F = digitalRead(12);
  if (F== LOW)
  {
    Serial.println("Fire!!!");
    digitalWrite(8, HIGH);
  }
  else
  {
    Serial.println("No worries");
    digitalWrite(8, LOW);
  }
}
