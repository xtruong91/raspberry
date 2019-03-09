/*
 * File: uart.c
 * File Created: Saturday, 9th March 2019
 * Author: truongtx (truongtx91@gmail.com)
 * -----
 * Description: 
 * Version: 0.1
 * Tool: CMake
 * -----
 * Copyright TruongTX
 */

#include "uart.h"
#include <wiringSerial.h>

static int fd; 
bool UART_init()
{
 fd = serialOpen ("/dev/ttyAMA0", 9600);
 if(fd > 0)
    return FALSE;
  else
    return TRUE;
}

uint8_t UART_puts(uint8_t length, void *pvData)
{
  if(length == 0 || pvData == NULL)
    return 0;
  if(fd > 0)
    return serialPuts(fd, (int*)pvData);
  else 
    return 0;
}

bool UART_isReady()
{
  //TODO
  return TRUE;
}
int8_t UART_getc()
{
  //TODO
  return 0;
}
uint8_t UART_gets(uint8_t length, void *pvData)
{
  //TODO
  return 0;
}