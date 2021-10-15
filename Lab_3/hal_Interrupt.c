
#include <avr/io.h>
#include "hal_Interrupt.h"


void hal_Interrupt_Disable(void){
			cli();
}
void hal_Interrupt_Enable(void) {
				sei();

}
uint32_t hal_Interrupt_SabeAndDisable(void){
				uint32_t status = SREG;
				cli();
				return status;
}
void hal_Interrupt_restore(uint32_t flags){
				SREG = flags;
}

