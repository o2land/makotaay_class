/*
Button Input
by Samson Chen
2023-12-11
*/

// pins
#define OUTPUT_PIN 5
#define INPUT_PIN 10

// start up
void setup() {
  pinMode(OUTPUT_PIN, OUTPUT);
  pinMode(INPUT_PIN, INPUT_PULLUP);
}

// loops
void loop() {
  if( digitalRead(INPUT_PIN) == HIGH ) {

    digitalWrite(OUTPUT_PIN, HIGH);
  } else {

    digitalWrite(OUTPUT_PIN, LOW);
  }

  delay(500);
}
