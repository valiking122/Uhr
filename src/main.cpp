#include <Arduino.h>

int pinnummere = 35;

void setup(){
  pinMode(pinnummere, OUTPUT);
  pinMode(42, OUTPUT);
}

void loop(){
  digitalWrite(pinnummere, HIGH);
  digitalWrite(42, HIGH);
  delay(1000);
  digitalWrite(pinnummere, LOW);
  digitalWrite(42, LOW);
  delay(1000);
}
