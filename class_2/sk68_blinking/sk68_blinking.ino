/*
sk68xx blinking
by Samson Chen
2023-12-06
*/

#include <LiteLED.h>

#define LED_TYPE          LED_STRIP_SK6812
#define LED_TYPE_IS_RGBW  0
#define LED_GPIO          8
#define LED_BRIGHT        32

// color code
static const crgb_t L_RED = 0xff0000;
static const crgb_t L_GREEN = 0x00ff00;
static const crgb_t L_BLUE = 0x0000ff;

LiteLED myLED(LED_TYPE, LED_TYPE_IS_RGBW);

// start up
void setup() {
  myLED.begin(LED_GPIO, 1);
  myLED.brightness(LED_BRIGHT);
}

// loops
void loop() {
  myLED.setPixel(0, L_RED, 1);
  delay(500);
  myLED.setPixel(0, L_GREEN, 1);
  delay(500);
  myLED.setPixel(0, L_BLUE, 1);
  delay(500);
}
