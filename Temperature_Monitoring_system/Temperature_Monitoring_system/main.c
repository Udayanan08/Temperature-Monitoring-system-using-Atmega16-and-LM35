/*
 * Temperature_Monitoring_system.c
 *
 * Created: 26/09/2020 09:43:03
 * Author : DELL
 */ 

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "ADC_ATMEGA16.c"
#include "lcd.c"



int main(void)
{
	init_LCD();
	ADC_Init();
	LCD_write_string("Temperature");
	LCD_cmd(0xc0);
	float a_val;
	float d_val;
	float Far;
	unsigned char *st[10];
    while (1) 
    {
		a_val = ADC_Read(0);
		d_val = a_val*4.88;
		d_val = d_val/10;
		Far	= d_val*1.8;
		Far = Far +32;
		sprintf(st,"Cel %d Far %d",(int)d_val,(int)Far);
		LCD_cmd(0xc0);
		LCD_write_string(st);
		_delay_ms(10);
		
    }
}

