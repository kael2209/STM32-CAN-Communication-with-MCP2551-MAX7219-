#include "spi.h"
#include "max7219.h"
#include "stdlib.h"
#include <stdio.h>
#include <string.h>

void max7219_init(void)
{
	spi_start();
	spi_writereg8(MAX7219_REG_DECODE_MODE,MAX7219_DECODE_NONE);
	spi_writereg8(MAX7219_REG_INTENSITY,0x0F);
	spi_writereg8(MAX7219_REG_SCAN_LIMIT,0x07);
	spi_writereg8(MAX7219_REG_SHUTDOWN,MAX7219_SHUTDOWN_ON);
	spi_writereg8(MAX7219_REG_DISPLAY_TEST,0);
}
void max7219_pos_num(uint8_t pos, uint8_t number)
{
	spi_writereg8(pos,number);
}
void max7219_display_number_dot(char str[])	
{
	int i=0,j=0;
	while(str[i])
	{
		char number = str[i];
		if (str[i] == '0')
		{
			spi_writereg8(8-j,number0);
			i++;j++;
		}
		else if (str[i] == '1')
		{
			spi_writereg8(8-j,number1);
			i++;j++;
		}
		else if (str[i] == '2')
		{
			spi_writereg8(8-j,number2);
			i++;j++;
		}
		else if (str[i] == '3')
		{
			spi_writereg8(8-j,number3);
			i++;j++;
		}
		else if (str[i] == '4')
		{
			spi_writereg8(8-j,number4);
			i++;j++;
		}
		else if (str[i] == '5')
		{
			spi_writereg8(8-j,number5);
			i++;j++;
		}
		else if (str[i] == '6')
		{
			spi_writereg8(8-j,number6);
			i++;j++;
		}
		else if (str[i] == '7')
		{
			spi_writereg8(8-j,number7);
			i++;j++;
		}
		else if (str[i] == '8')
		{
			spi_writereg8(8-j,number8);
			i++;j++;
		}
		else if (str[i] == '9')
		{
			spi_writereg8(8-j,number9);
			i++;j++;
		}
		else if (str[i] == 'A')
		{
			spi_writereg8(8-j,letterA);
			i++;j++;
		}
		else if (str[i] == 'd')
		{
			spi_writereg8(8-j,letterd);
			i++;j++;
		}
		else if (str[i] == 'C')
		{
			spi_writereg8(8-j,letterC);
			i++;j++;
		}
		else if (str[i] == '-')
		{
			spi_writereg8(8-j,hyphen);
			i++;j++;
		}
		else if (str[i]== '.')
		{
			char code;
			if (str[i-1] == '0') code = number0;
			else if (str[i-1] == '0') code = number0;
			else if (str[i-1] == '1') code = number1;
			else if (str[i-1] == '2') code = number2;
			else if (str[i-1] == '3') code = number3;
			else if (str[i-1] == '4') code = number4;
			else if (str[i-1] == '5') code = number5;
			else if (str[i-1] == '6') code = number6;
			else if (str[i-1] == '7') code = number7;
			else if (str[i-1] == '8') code = number8;
			else if (str[i-1] == '9') code = number9;
			spi_writereg8(8-j+1,code|(1<<7));	 
			i++;
		}
	}
	
}

