/*
 * main.c
 *
 *  Created on: Jan 19, 2017
 *      Author: Ahmed Abd Elbadee
 *      Email: ahmedbadee17@gmail.com
 */


#include "driver.h"
#include "bluetooth.h"

void bluetooth_init(void) {
	// Set the BaudRate to 9600
	USARTBAUDRateRegisterL = 51;
	USARTBAUDRateRegisterH = (51 >> 8);

	// Set the character size to 8-bit
	USARTControlRegisterC |= (1 << USARTRegisterSelect) | (1 << USARTCharacterSize1) | (1 << USARTCharacterSize0);
}

void bluetooth_transmit(unsigned char data) {
	// Loop until the data register is ready
	while (((1 << USARTDataRegisterEmpty) & USARTControlRegisterA) == 0);

	// Put the data in the data register
	USARTDataRegister = data;

	// Enable the transmitter
	USARTControlRegisterB |= (1 << USARTTransmitterEnable);

	// Loop until transmition is complete
	while (((1 << USARTTransmitComplete) & USARTControlRegisterA) == 0);
}

unsigned char bluetooth_receive(void) {
	// Loop until the data register is ready
	while (((1 << USARTDataRegisterEmpty) & USARTControlRegisterA) == 0);

	// Enable the receiver
	USARTControlRegisterB |= (1 << USARTReceiverEnable);

	// Loop until the receive operation in complete
	while (((1 << USARTReceiveComplete) & USARTControlRegisterA) == 0);

	// Return the received data
	return USARTDataRegister;
}
