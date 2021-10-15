#ifndef __hal_Interrupt_h
#define __hal_Interrupt_h
#include <stdint.h>

void hal_Interrupt_Disable(void);
void hal_Interrupt_Enable(void);
uint32_t hal_Interrupt_SabeAndDisable(void);
void hal_Interrupt_restore(uint32_t flags);



#endif
