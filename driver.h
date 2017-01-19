/*
 * driver.h
 *
 *  Created on: Jan 19, 2017
 *      Author: ahmed
 */

#ifndef DRIVER_H_
#define DRIVER_H_

#define offset                       0x20

// Port D
#define DataRegisterD                (*(volatile unsigned char *) (0x12 + offset))     // PORTD
#define DirectionRegisterD           (*(volatile unsigned char *) (0x11 + offset))     // DDRD
#define InputPinsAddressD            (*(volatile unsigned char *) (0x10 + offset))     // PIND
#define RXD                          0                                                 // PD0
#define TXD                          1                                                 // PD1
#define Pin6                         6                                                 // PD6

// USART
#define USARTDataRegister            (*(volatile unsigned char *) (0x0C + offset))     // UDR
#define USARTControlRegisterA        (*(volatile unsigned char *) (0x0B + offset))     // UCSRA
#define USARTReceiveComplete         7                                                 // RXC
#define USARTTransmitComplete        6                                                 // TXC
#define USARTDataRegisterEmpty       5                                                 // UDRE
#define USARTControlRegisterB        (*(volatile unsigned char *) (0x0A + offset))     // UCSRB
#define USARTReceiverEnable          4                                                 // RXEN
#define USARTTransmitterEnable       3                                                 // TXEN
#define USARTControlRegisterC        (*(volatile unsigned char *) (0x20 + offset))     // UCSRC
#define USARTRegisterSelect          7                                                 // URSEL
#define USARTModeSelect              6                                                 // UMSEL
#define USARTParityMode1             5                                                 // UPM1
#define USARTParityMode0             4                                                 // UPM0
#define USARTStopBit                 3                                                 // USBS
#define USARTCharacterSize1          2                                                 // UCSZ1
#define USARTCharacterSize0          1                                                 // UCSZ1
#define USARTBAUDRateRegisterL       (*(volatile unsigned char *) (0x09 + offset))     // UBBRL
#define USARTBAUDRateRegisterH       (*(volatile unsigned char *) (0x20 + offset))     // UBBRH

#endif /* DRIVER_H_ */
