
#include <avr/io.h>
#include <avr/interrupt.h>
#include "hal_Interrupt.h"

// disbale interrupts only
void hal_Interrupt_Disable(void){
			cli();
}

// enable interrupts only
void hal_Interrupt_Enable(void) {
				sei();

}

// saves the value of the SREG and disables interrupts. Safe for use to ensure interrupt status is not broken
uint32_t hal_Interrupt_SabeAndDisable(void){
				uint32_t status = SREG;
				cli();
				return status;
}
// RESTORES SAVE STAUS OF THE SREG
void hal_Interrupt_restore(uint32_t flags){
				SREG = flags;
}

