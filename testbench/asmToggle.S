#include <avr/io.h>

.global asmToggle

asmToggle:
; Should really check the input parameters, but can't 
; be bothered. Just toggling the led on pin 13.
        sbi   _SFR_IO_ADDR(PINB),5
        ret

