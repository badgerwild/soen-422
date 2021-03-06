#ifndef __hal_util_Bit_h
#define __hal_util_Bit_h
#include <stdint.h>
#include <stdbool.h>

//Hal function defintions take in a destination port as the value and a pin as the bit
// read value of a bit
uint8_t hal_util_Bit_Read(uint8_t value, uint8_t bit) {return ((value) >> (bit) & 0x01);}
// will set the value of a bit on a port, ie turn on a pin
uint8_t hal_util_Bit_Set(uint8_t value, uint8_t bit) {return ((value) |= (1UL << (bit)));}
// will turn off a pin off a port
uint8_t hal_util_Bit_Clear(uint8_t value, uint8_t bit) {return ((value) &= ~(1UL << (bit)));}
// will toggle a value of a bit
uint8_t hal_util_Bit_Toggle(uint8_t value, uint8_t bit) {return ((value) ^= (1UL << (bit)));}
//will write the value of a pin
uint8_t hal_util_Bit_Write(uint8_t value, uint8_t bit, uint8_t bitvalue) {
return ((bitvalue) ? hal_util_Bit_Set(value, bit) : hal_util_Bit_Clear(value, bit));
}
//checks condition of bit on a port
bool hal_util_Bit_switch(uint8_t value, uint8_t bit) {return ((value) & (1UL << (bit)));}
#endif
