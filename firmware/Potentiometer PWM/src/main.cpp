#include <Arduino.h>

#define POT_INPUT A2
#define POT_LOW 0
#define POT_HIGH 1023

#define PWM_OUTPUT 10

void setup() {

  Serial.begin(9600);

  // setup PWM output pin
  pinMode(PWM_OUTPUT, OUTPUT);
}

void loop() {
  
  // read potentiometer value
  int pot_value = map(analogRead(POT_INPUT), POT_LOW, POT_HIGH, 0, 255);
  Serial.println(pot_value);

  // output mapped potentiomer value (PWM)
  analogWrite(PWM_OUTPUT, pot_value);
}