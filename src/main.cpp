#include <Arduino.h>

#define BUZZER 8

int normal_bit_tone = 1500;  //2000 hz
int duration;
int bpm = 120;

void setup() {
  duration = 6000/bpm;
}

void loop() {
  tone(BUZZER, normal_bit_tone, duration);
  delay(60000/bpm);
}