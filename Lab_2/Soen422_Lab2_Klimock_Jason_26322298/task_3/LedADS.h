#ifndef LEDCDS_H
#define LEDCDS_H

#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

// Interface definitions of functions that are defined in C file
void Led_init(void);
void Led_TurnOn(void);
void Led_TurnOff(void);

#endif
