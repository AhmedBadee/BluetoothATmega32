/*
 * main.c
 *
 *  Created on: Jan 19, 2017
 *      Author: Ahmed Abd Elbadee
 *      Email: ahmedbadee17@gmail.com
 */

#include "driver.h"
#include "gpio.h"
#include "bluetooth.h"

int main(void) {

	unsigned char received_data;

	// Initiate the bluetooth setup
	bluetooth_init();

	// Set the pin with led to output
	set_output_pins_D(Pin6);

	// Set the Tx pin to output
	set_output_pins_D(TXD);

	// Set the Rx pin to input
	set_input_pins_D(RXD);

	while (1) {
		// Receive data from bluetooth
		received_data = bluetooth_receive();

		// Check the received data
		if (received_data == '1') {
			// Turn off the led
			clear_output_D(Pin6);
		} else {
			// Turn on the led
			set_output_D(Pin6);
		}
	}
}
