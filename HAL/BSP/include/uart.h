/*
 * File: uart.h
 * File Created: Saturday, 9th March 2019 
 * Author: truongtx (truongtx91@gmail.com)
 * -----
 * Description: provide API for communating with the other module via UART 
 * Version: 0.1
 * Tool: CMake
 * -----
 * Copyright TruongTX
 */


#ifndef _UART_H
#define _UART_H

#include "type.h"

bool UART_init();
void UART_putc(int8_t c);
uint8_t UART_puts(uint8_t length, void *pvData);

bool UART_isReady();
int8_t UART_getc();
uint8_t UART_gets(uint8_t length, void *pvData);


#endif