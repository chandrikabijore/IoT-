// 4.Gases detection
void setup() {
 // put your setup code here, to run once:
Serial.begin(9600);
// pinMode(4,INPUT);
pinMode(A5,INPUT);
pinMode(8, OUTPUT)


}


void loop() {
 // put your main code here, to run repeatedly:
int x = digitalRead(4);
Serial.println(x);
if(x>100){
 digitWrite(8,HIGH);
}
else{
 digitWrite(8,LOW);
}
delay(1000);
}

 
