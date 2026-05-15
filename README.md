# WS2812B Camera Trigger Illumination

This project contains Arduino code for controlling a WS2812B LED strip together with a camera trigger signal. The setup is intended for basic optical inspection or machine vision illumination experiments.

## Features

- Controls a WS2812B/NeoPixel LED strip
- Sends a trigger signal to a camera
- Can be adapted for synchronized illumination and image capture
- Suitable for testing LED-based inspection setups

## Hardware

- Arduino-compatible microcontroller
- WS2812B LED strip
- Camera trigger input
- External 5 V power supply for LEDs

## Pin Configuration

| Function | Arduino Pin |
|---|---|
| Camera Trigger | D6 |
| WS2812B Data | D8 |

## Notes

The LED strip must be powered from an external 5 V power supply. Do not power a large LED strip directly from the Arduino board. Connect the Arduino GND and LED power supply GND together.

## Author

Md. Zobaer Ahmed Rahat
