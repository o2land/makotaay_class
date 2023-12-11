/*
Ultrasonic
by Samson Chen
2023-12-11
*/

// pins
#define TRIG_PIN 8
#define ECHO_PIN 6

// start up
void setup()
{
  pinMode(TRIG_PIN , OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
  Serial.println("Ultrasoic distance");
}

// loops
void loop()
{
  long duration;
  int distance;

  digitalWrite(TRIG_PIN,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN,LOW);
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration*0.034/2;

  Serial.println(distance);
  delay(50);
}
