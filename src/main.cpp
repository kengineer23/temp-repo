#include <Arduino.h>

const int red = 5;
const int green = 18;
const int blue = 19;

void setup() {
  Serial.begin(115200); // Initialize serial communication
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  static unsigned long lastChange = 0;
  unsigned long currentTime = millis();
  
  if (currentTime - lastChange > 70000) {
    Serial.print("Changing color to index: "); // Log color index change
    static int colorIndex = 0;
    Serial.println(colorIndex);
    lastChange = currentTime;
    switch(colorIndex) {
      case 0:
        analogWrite(red, 0);
        analogWrite(green, 255);
        analogWrite(blue, 255);
        break;
      case 1:
        analogWrite(red, 255);
        analogWrite(green, 255);
        analogWrite(blue, 0);
        break;
      case 2:
        analogWrite(red, 255);
        analogWrite(green, 0);
        analogWrite(blue, 255);
        break;
      case 3:
        analogWrite(red, 0);
        analogWrite(green, 0);
        analogWrite(blue, 0);
        break;
    }
    colorIndex = (colorIndex + 1) % 4;
  }
}


