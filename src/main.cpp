#include <Arduino.h>

#define BUZZER 8

int normal_bit_tone = 1500;  // hz
int first_bit_tone = 1300;
int duration;
int bpm = 120;
int counter;

void setup() {
  duration = 6000/bpm;
  counter = 1;
}

void loop() {
  if (counter%4 == 1){
    tone(BUZZER, first_bit_tone, duration);
  }
  else{
    tone(BUZZER, normal_bit_tone, duration);
  }
  counter++;
  delay(60000/bpm);
}