/*
 * main.c
 *
 *  Created on: Jan 19, 2017
 *      Author: Ahmed Abd Elbadee
 *      Email: ahmedbadee17@gmail.com
 */

#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

void bluetooth_init(void);
void bluetooth_transmit(unsigned char data);
unsigned char bluetooth_receive(void);

#endif /* BLUETOOTH_H_ */
