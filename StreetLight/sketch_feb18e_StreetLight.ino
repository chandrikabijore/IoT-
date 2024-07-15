void setup() 
{
 //Put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(4,INPUT);
 pinMode(8,OUTPUT);
}

void loop() 
{
 //Put your main code here, to run repeatedly:
 int x = digitalRead(4);
 Serial.println(x);
 if(x==0)
 {
  digitWrite(8,HIGH);
 }
 else
 {
  digitWrite(8,LOW);
 }
}
