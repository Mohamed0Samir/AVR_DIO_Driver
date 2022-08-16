#ifndef		DIO_INTERFACE_H
#define		DIO_INTERFACE_H

#define		PORTA		0
#define		PORTB		1
#define		PORTC		2
#define		PORTD		3

#define		PINA		0
#define		PINB		1
#define		PINC		2
#define		PIND		3

#define		PIN0		0
#define		PIN1		1
#define		PIN2		2
#define		PIN3		3
#define		PIN4		4
#define		PIN5		5
#define		PIN6		6
#define		PIN7		7

#define		INPUT		0
#define		OUTPUT		1

#define		SET			1
#define		CLR			0

#define		HIGH		1
#define		LOW			0
void DIO_init(u8 portx, u8 PINY, u8 Direction);

void DIO_SetPORTXPINY(u8 portx, u8 PINY, u8 Val);

u8	 DIO_GetPINX_Val(u8 portx, u8 PINY);

#endif