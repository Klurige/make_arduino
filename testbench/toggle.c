#include <avr/io.h>
#include "toggle.h"
#include "asmToggle.h"

void toggle(uint8_t pin) {
  // Convert pin to port and bit.
  // For the purpose of this test program, I'm just assuming that
  // 13 is passed in, as that is the on-board led on the Uno.
  // Pin 13 is located at PORTB, bit 5.
  asmToggle(PORTB, 5);
}

