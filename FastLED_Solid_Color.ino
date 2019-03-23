#include <FastLED.h>

// Author: Arthur (Damon) Mills
// Last Update: 3/21/2019
// Released for public use under GPL 2.0 License
// https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html

// Description: Causes WS2812B LEDs on Adafruit NeoPixel Ring-12 to illuminate a solid color

// Requires the FastLED library (Sketch -> Include Library -> Manage Libraries)
// Change number of LEDs with the NUM_LEDS variable
// Change the Ardunio PIN to control the LEDs with the LED_PIN variable
// Color is set using CRGB(Red, Green, Blue) command in main program

#define LED_PIN   0 // PIN used on Arduino board
#define NUM_LEDS  12 // number of LEDs - constant

CRGB leds[NUM_LEDS];

// initial values for brightness, fade increment/decrement rate, and nuymber of LEDs

int brightness = 255;   // brightness value of the LEDs 0 (off) - 255 (max) 
int ledCount = NUM_LEDS; // total number of LEDs controlled

// initial RGB values for LEDs

int redValue = 75;   // red value for LEDs (CRGB)
int greenValue = 0; // green value for LEDs (CRGB)
int blueValue = 130;    // blue value for LEDs (CRGB)

// sample RGB color values 
// white  (255,255,255)
// red    (255,0,0)
// blue   (0,0,255)
// yellow (255,255,0)
// green  (0,128,0)
// purple (128,0,128)
// indigo (75,0,130)
// orange (255,165,0)

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);  // FastLED library call to program WS2812 LEDs
}

void loop() {
  for (int i = 0; i <= ledCount; i++) {
  leds[i] = CRGB(redValue, greenValue, blueValue); // set LED RGB (red, green, blue) color value (0-255)
  FastLED.setBrightness(brightness); // set brightness value
  FastLED.show();
  }
}
