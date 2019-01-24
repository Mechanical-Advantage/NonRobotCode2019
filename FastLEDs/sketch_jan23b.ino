#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 60
// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 3
// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
   
      FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
     
}

void loop() { 
  // Turn the LED on, then pause
 /* leds[0] = CRGB::Red;
  leds[1] = CRGB::Blue;
  FastLED.show();
  delay(500);
  // Now turn the LED off, then pause
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  FastLED.show();
  delay(500);
  */
  for (int i = 0; i <= NUM_LEDS; i++) {
  /*  setAll( = CRGB::Red;
    FastLED.show();
    delay(500);
    setAll( = CRGB::Black;
    FastLED.show();
    delay(500);
   */
  setAll(0xff, 0x00, 0x00);
  showStrip();  
  delay(500);
  setAll(0x00, 0x00, 0x00);
  showStrip();
  delay(500);
  }
}

void showStrip() {
  FastLED.show();
}

void setPixel(int Pixel, byte red, byte green, byte blue) {
  leds[Pixel].r = red;
  leds[Pixel].b = blue;
  leds[Pixel].g = green;

}

void setAll(byte red, byte green, byte blue) {
  for(int i = 0; i < NUM_LEDS; i++ ) {
    setPixel(i, red, green,blue);
  }
  showStrip();
}
