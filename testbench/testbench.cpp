#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
#include "toggle.h"

#define TESTLED 13

void setup() {
  pinMode(TESTLED, OUTPUT);
}

void loop() {
  toggle(TESTLED);
  delay(250);
}

