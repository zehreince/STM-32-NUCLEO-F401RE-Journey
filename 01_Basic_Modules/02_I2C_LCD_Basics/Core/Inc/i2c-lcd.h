#ifndef I2C_LCD_H
#define I2C_LCD_H

#include "stm32f4xx_hal.h"

void lcd_init(void);
void lcd_send_cmd(char cmd);
void lcd_send_data(char data);
void lcd_send_string(char *str);

#endif
