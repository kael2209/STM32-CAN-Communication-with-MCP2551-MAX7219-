#ifndef _MAX7219_H_
#define _MAX7219_H_

// Ð?nh nghia d?a ch? các thanh ghi c?a MAX7219
#define MAX7219_REG_NOOP        	0x00  // Không th?c hi?n hành d?ng
#define MAX7219_REG_DIGIT0      	0x01  // Thanh ghi cho LED 7 do?n 0
#define MAX7219_REG_DIGIT1      	0x02  // Thanh ghi cho LED 7 do?n 1
#define MAX7219_REG_DIGIT2      	0x03  // Thanh ghi cho LED 7 do?n 2
#define MAX7219_REG_DIGIT3      	0x04  // Thanh ghi cho LED 7 do?n 3
#define MAX7219_REG_DIGIT4      	0x05  // Thanh ghi cho LED 7 do?n 4
#define MAX7219_REG_DIGIT5      	0x06  // Thanh ghi cho LED 7 do?n 5
#define MAX7219_REG_DIGIT6      	0x07  // Thanh ghi cho LED 7 do?n 6
#define MAX7219_REG_DIGIT7      	0x08  // Thanh ghi cho LED 7 do?n 7
#define MAX7219_REG_DECODE_MODE 	0x09  // Ch? d? gi?i mã BCD
#define MAX7219_REG_INTENSITY   	0x0A  // Ð? sáng
#define MAX7219_REG_SCAN_LIMIT  	0x0B  // S? lu?ng digit quét
#define MAX7219_REG_SHUTDOWN    	0x0C  // B?t/t?t hi?n th?
#define MAX7219_REG_DISPLAY_TEST 	0x0F 	// Ch? d? ki?m tra hi?n th?

// Giá tr? cho thanh ghi DECODE_MODE
#define MAX7219_DECODE_NONE     0x00  // Không gi?i mã, di?u khi?n bit tr?c ti?p
#define MAX7219_DECODE_ALL      0xFF  // Gi?i mã BCD cho t?t c? 8 digit

// Giá tr? cho thanh ghi INTENSITY (d? sáng)
#define MAX7219_INTENSITY_MIN   0x00  // Ð? sáng th?p nh?t
#define MAX7219_INTENSITY_MAX   0x0F  // Ð? sáng cao nh?t

// Giá tr? cho thanh ghi SCAN_LIMIT
#define MAX7219_SCAN_1_DIGIT    0x00  // Quét 1 digit
#define MAX7219_SCAN_8_DIGIT    0x07  // Quét 8 digit

// Giá tr? cho thanh ghi SHUTDOWN
#define MAX7219_SHUTDOWN_OFF    0x00  // T?t hi?n th?
#define MAX7219_SHUTDOWN_ON     0x01  // B?t hi?n th?

// Giá tr? cho thanh ghi DISPLAY_TEST
#define MAX7219_TEST_OFF        0x00  // T?t ch? d? ki?m tra
#define MAX7219_TEST_ON         0x01  // B?t ch? d? ki?m tra (t?t c? LED sáng)

#include <stdint.h>



#define number0			0b01111110
#define number1			0b00110000
#define number2			0b01101101
#define number3			0b01111001
#define number4			0b00110011
#define number5			0b01011011
#define number6			0b01011111
#define number7			0b01110000
#define number8			0b01111111
#define number9			0b01111011
#define hyphen			0b00000001
#define letterA			0b01110111
#define letterd			0b00111101
#define letterC			0b01001110


void max7219_init(void);
void max7219_pos_num(uint8_t pos, uint8_t number);
void max7219_display_number_dot(char str[])	;




#endif