#include"TypeDefine.h"
#include"DIO_private.h"
#include"DIO_Interface.h"

void DIO_init(u8 portx, u8 PINY, u8 Direction){
	switch(portx){
		case PORTA:
			if(Direction==OUTPUT){
				DIO_DDRA|=(HIGH<<PINY);
			}
			else
				DIO_DDRA&=~(HIGH<<PINY);
			break;
		case PORTB:
			if(Direction==OUTPUT){
				DIO_DDRB|=(HIGH<<PINY);
			}
			else
				DIO_DDRB&=~(HIGH<<PINY);
			break;
		case PORTC:
			if(Direction==OUTPUT){
				DIO_DDRC|=(HIGH<<PINY);
			}
			else
				DIO_DDRC&=~(HIGH<<PINY);
			break;
		case PORTD:
			if(Direction==OUTPUT){
				DIO_DDRD|=(HIGH<<PINY);
			}
			else
				DIO_DDRD&=~(HIGH<<PINY);
			break;
		default:
			break;
	}
}

void DIO_SetPORTXPINY(u8 portx, u8 PINY, u8 Val){
	switch(portx){
		case PORTA:
			if(Val==OUTPUT){
				DIO_PORTA|=(HIGH<<PINY);
			}
			else
				DIO_PORTA&=~(HIGH<<PINY);
			break;
		case PORTB:
			if(Val==OUTPUT){
				DIO_PORTB|=(HIGH<<PINY);
			}
			else
				DIO_PORTB&=~(HIGH<<PINY);
			break;
		case PORTC:
			if(Val==OUTPUT){
				DIO_PORTC|=(HIGH<<PINY);
			}
			else
				DIO_PORTC&=~(HIGH<<PINY);
			break;
		case PORTD:
			if(Val==OUTPUT){
				DIO_PORTD|=(HIGH<<PINY);
			}
			else
				DIO_PORTD&=~(HIGH<<PINY);
			break;
		default:
			break;
	}
	
}

u8	 DIO_GetPINX_Val(u8 PINX, u8 PINY){
	switch(PINX){
		case PINA:
			if((DIO_PINA>>PINY) && 0x01)
				return 1;
			return 0;
			break;
		case PINB:
			if((DIO_PINB>>PINY) && 0x01)
				return 1;
			return 0;
			break;
		case PINC:
			if((DIO_PINC>>PINY) && 0x01)
				return 1;
			return 0;
			break;
		case PIND:
			if((DIO_PIND>>PINY) && 0x01)
				return 1;
			return 0;
			break;
		default:
			break;
	}
}
