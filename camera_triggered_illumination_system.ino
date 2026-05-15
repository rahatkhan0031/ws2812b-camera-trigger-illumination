#include <Adafruit_NeoPixel.h>

#define CAMERA_TRIGGER_PIN 6
#define LED_PIN 8
#define NUM_LEDS 690

Adafruit_NeoPixel strip(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(CAMERA_TRIGGER_PIN, OUTPUT);
  digitalWrite(CAMERA_TRIGGER_PIN, LOW);

  strip.begin();
  strip.setBrightness(80);   // Limit brightness to reduce current
  strip.show();              // Turn all pixels off
}

void loop() {
  // Turn LEDs on for illumination
  setAllPixels(strip.Color(100, 100, 100));  // White light

  delay(50);  // Short settling time before camera trigger

  // Trigger the camera
  digitalWrite(CAMERA_TRIGGER_PIN, HIGH);
  delay(10);  // Camera trigger pulse width
  digitalWrite(CAMERA_TRIGGER_PIN, LOW);

  delay(200); // Time for camera exposure or processing

  // Turn LEDs off
  setAllPixels(strip.Color(0, 0, 0));

  delay(1000); // Wait before next capture
}

void setAllPixels(uint32_t color) {
  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, color);
  }
  strip.show();
}