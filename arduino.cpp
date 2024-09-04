#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "R311PRO-1ec5";
const char* password = "12345678";
const char* serverUrl = "http://192.168.8.97:8000/"; // Replace with your server URL

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    WiFiClient client; // Create a WiFiClient object
    HTTPClient http;
    http.begin(client, serverUrl); // Use the updated method

    int httpCode = http.GET(); // Make the GET request
    // Serial.println(httpCode);

    if (httpCode == 200) {
      String response = http.getString(); // Read the response
      Serial.println("Response: " + response);
    } 
    else {
      Serial.println("Error: " + String(httpCode));
    }

    http.end(); // Close the connection
  }
  delay(5000); // Wait for 5 seconds before making the next request
}
