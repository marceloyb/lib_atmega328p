#include <avr/io.h>
#include <avr/portpins.h>
#include <util/delay.h>
#include <stdbool.h>
#include "include/setpin.h"
#include "include/7segment.h"
#include "include/uart.h"
#include "include/button.h"
#include "include/distancesensor.h"
#include "include/delay.h"

#define swt_bit(reg, pos) (reg ^= (1 << pos))	// mudança de estado
#define clr_bit(reg, pos) (reg &= ~(1 << pos))	// limpar os bits de uma pos
#define set_bit(reg, pos) (reg |= (1 << pos))	// setar bits 
#define isset_bit(reg, pos) (reg & (1 << pos)) // check if bit set

#define input 0
#define output 1



int main(void){	
	uart_init();
	definedistpins(8, 9);


	while(1){
		printf("%i\n", distanceSensor(8,9));
	}

	return 0;
}
