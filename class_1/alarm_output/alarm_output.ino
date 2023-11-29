/*
digital output
by Samson Chen
2023-11-20
*/

// pins
#define OUTPUT_PIN 5

// start up
void setup() {
  pinMode(OUTPUT_PIN, OUTPUT);
}

// loops
void loop() {
  digitalWrite(OUTPUT_PIN, HIGH);
  delay(500);
  digitalWrite(OUTPUT_PIN, LOW);
  delay(500);
}
