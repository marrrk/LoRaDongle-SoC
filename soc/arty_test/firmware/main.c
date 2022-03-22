#include <stdio.h>
#include <generated/csr.h>

void isr(void){
	asm("nop");
}


int main(void){

	while (1){
		leds_out_write(0x2);
		//uart_rxtx_write('a');
		//printf("Hello World\n");
	}

	return 0;

}