#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN            3

#define NUMPIXELS      1

Adafruit_NeoPixel pixels = 
  Adafruit_NeoPixel(
    NUMPIXELS,
    PIN,
    NEO_RGB + NEO_KHZ800);


void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);

  pixels.begin();
}

void setColorPWM(int r,int g, int b) {
  analogWrite(5, r);
  analogWrite(6, g);
  analogWrite(9, b);
}

void loop() {
  setColorPWM(25, 0, 0);
  pixels.setPixelColor(0, pixels.Color(25, 0, 0));
  pixels.show(); 
  delay(1000);
  setColorPWM(0, 25, 0);
  pixels.setPixelColor(0, pixels.Color(0, 25, 0));
  pixels.show();
  delay(1000);
  setColorPWM(0, 0, 25);
  pixels.setPixelColor(0, pixels.Color(0, 0, 25));
  pixels.show();
  delay(1000);
}
