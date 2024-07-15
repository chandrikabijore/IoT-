 
#define BLYNK_TEMPLATE_ID "TMPL3sBAiN1eB"
#define BLYNK_TEMPLATE_NAME "Shivi"
#define BLYNK_AUTH_TOKEN "Ds4pVma7mQXE_1uZgI91PHY8Q_hfJlVV"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "Chandrika";
char pass[] = "yamm#48e";
char auth[] = "Ds4pVma7mQXE_1uZgI91PHY8Q_hfJlVV";

void setup() {
  Serial.begin(115200);
  pinMode(16,INPUT);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
  

  Blynk.begin(auth, ssid, pass);
}

void loop() {

  int mq7=digitalRead(16);
  Blynk.run();
  
  Blynk.virtualWrite(V0, mq7);
  
  delay(1000);
}
