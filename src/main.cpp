#include <Arduino.h>
#include <WiFi.h>


const char *ssid = "";
const char *password = "";


void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println("Connecting to....");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("*");
  }
  Serial.println("WiFi Connected");
}

void loop() {

}

