#include <Arduino.h>

// Define the GPIO pin for the onboard LED (GPIO 2 on most ESP32 boards)
const int ledPin = 2;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);
  delay(1000);  // Wait for a second
  
  // Turn the LED off (LOW is the voltage level)
  digitalWrite(ledPin, LOW);
  delay(1000);  // Wait for a second
}