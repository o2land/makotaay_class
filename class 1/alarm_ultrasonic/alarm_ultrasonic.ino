/*
Alarm Ultrasonic
by Samson Chen
2023-11-20
*/

// pins
#define TRIG_PIN 8
#define ECHO_PIN 6
#define ALARM_PIN 5

// vars
long duration;
int distance;
bool alarm_on;
bool alarm_sound_state;

// ultrasonic distance
int calculateDistance()
{
  digitalWrite(TRIG_PIN,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN,LOW);
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration*0.034/2;
  return distance;
}

// start up
void setup()
{
  pinMode(TRIG_PIN , OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(ALARM_PIN, OUTPUT);
  alarm_on = false;
  alarm_sound_state = false;
  Serial.begin(9600);
  Serial.println("Hello");
}

// loops
void loop()
{
  calculateDistance();
  Serial.println(distance);
  delay(50);

  if(distance < 120 && distance > 0)
  {
    alarm_on = true;
  }
  else
  {
    alarm_on = false;
  }

  if(alarm_on)
  {
    if(alarm_sound_state)
    {
      digitalWrite(ALARM_PIN, LOW);
    }
    else
    {
      digitalWrite(ALARM_PIN, HIGH);
    }

    alarm_sound_state = !alarm_sound_state;

    delay(distance);
  }
  else
  {
    digitalWrite(ALARM_PIN, LOW);
  }
}
