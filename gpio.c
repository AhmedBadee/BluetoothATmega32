/*
 * main.c
 *
 *  Created on: Jan 19, 2017
 *      Author: Ahmed Abd Elbadee
 *      Email: ahmedbadee17@gmail.com
 */

#include "driver.h"
#include "gpio.h"


// set the specified pin to output
void set_output_pins_D(char pin_no) {
	DirectionRegisterD |=  (1 << pin_no);
}

// set the specified pin to input
void set_input_pins_D(char pin_no) {
	DirectionRegisterD &= ~(1 << pin_no);
}

// Output 1 on the specified pin
void set_output_D(char pin_no) {
	DataRegisterD |= (1 << pin_no);
}

// Output 0 on the specified pin
void clear_output_D(char pin_no) {
	DataRegisterD &= ~(1 << pin_no);
}
