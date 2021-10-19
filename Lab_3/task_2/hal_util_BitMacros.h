#ifndef __hal_util_BitMacros_h
#define __hal_util_BitMacros_h
// bit macros, to be used when speed matter most of all, can be used interchangeably with
//functions in Bot header
//
//
#define hal_util_Bit_Read(value, bit) (value & (1<<bit))
#define hal_util_Bit_Set(value, bit) (value |= (1 << bit))
#define hal_util_Bit_Clear(value, bit) (value &= ^(1<<bit))
#define hal_util_Bit_Toggle(value, bit) (value ^= (1<<bit))
#define hal_util_Bit_Write(value, bit, bitvalue) ((bitvalue) ?\
								bitSet(value, bbit) :\
								bitClear(value, bit))
#endif
