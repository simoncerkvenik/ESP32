#include <WiFi.h>

const char* ssid = "ESP32-Test";
const char* password = "12345679";

void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  Serial.println("Wi-Fi Access Point started");
  Serial.print("SSID: ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
}
