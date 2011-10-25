#include <Arduino.h>
#include "toggle.h"

#define TESTLED 13

void setup() {
  pinMode(TESTLED, OUTPUT);
}

void loop() {
  toggle(TESTLED);
  delay(250);
}

