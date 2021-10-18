#ifndef __hal_MM_h
#define __hal_MM_h
#include <stdint.h>

void hal_MM_init(void);
void* hal_MM_GetSegment(uint16_t nBytes);
void hal_MM_FreeSegment(void* segmentBasedAddress);

#if defined(MM_DefragOn)
void hal_MM_Defrag(void);
#endif

#endif