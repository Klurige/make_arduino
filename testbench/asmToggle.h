#ifndef __ASMTOGGLE_H__
#define __ASMTOGGLE_H__
#include <inttypes.h>

#ifdef __cplusplus
extern "C" {
#endif

void asmToggle(uint8_t port, uint8_t pin) __attribute__((naked));

#ifdef __cplusplus
}
#endif

#endif // __ASMTOGGLE_H__

