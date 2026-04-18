#include <WiFi.h>

const char* ssid = "ESP32-Server";
const char* password = "12345679";

WiFiServer server(80);

void setup() {
  Serial.begin(115200);

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  server.begin();

  Serial.println("Web server started");
  Serial.print("SSID: ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  WiFiClient client = server.available();

  if (client) {
    Serial.println("New client connected");

    String request = client.readStringUntil('\r');
    Serial.println(request);
    client.flush();

    client.println("HTTP/1.1 200 OK");
    client.println("Content-type:text/html");
    client.println();
    client.println("<!DOCTYPE html><html><body>");
    client.println("<h1>ESP32 Web Server</h1>");
    client.println("<p>Hello from ESP32!</p>");
    client.println("</body></html>");
    client.println();

    client.stop();
    Serial.println("Client disconnected");
  }
}
