// 5. Car reverse indicator:

void setup() {
 // put your setup code here, to run once:
Serial.begin(9600);
// pinMode(4,INPUT);
pinMode(7,INPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}


void loop() {
 // put your main code here, to run repeatedly:
int x = digitalRead(7);
Serial.println(x);
if(x==0){
 digitWrite(9,LOW);
 digitWrite(8,HIGH);
}
else{
 digitWrite(8,LOW);
 digitWrite(9,HIGH);
}
delay(1000);
}
