/*
 * GccApplication1.c
 *
 * Created: 21-04-2022 12:44:26
 * Author : askin
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB=0xFF;
	unsigned char z;
	while(1)
	{
		
		for(z=0;z<255;z++)
		{
			PORTB=z;
			_delay_ms(1000);
		}
	}
	return 0;
}

