#include <Wire.h>

void setup() {
  pinMode (LED_BUILTIN, OUTPUT);
  Wire.begin(1);
  Wire.onReceive(takeCommand);
}

void loop() {
  //delay the process for a second.
  delay(100);
}

void takeCommand(int x){
  int buttonState = Wire.read();
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(LED_BUILTIN, HIGH);
    //delay(100);
  }
  if (buttonState == LOW){
    digitalWrite(LED_BUILTIN, LOW);
    //delay(100);
  }
}
