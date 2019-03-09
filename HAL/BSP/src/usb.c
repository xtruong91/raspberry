/*
 * File: usb.c
 * File Created: Saturday, 9th March 2019
 * Author: truongtx (truongtx91@gmail.com)
 * -----
 * Description: 
 * Version: 0.1
 * Tool: CMake
 * -----
 * Copyright TruongTX
 */

#include "usb.h"
#include <wiringSerial.h>

static int fd = 0;

bool USB_init()
{
  fd = serialOpen ("/dev/ttyUSB0", 9600);
  if(fd < 0 )
    return FALSE;
  else 
    return TRUE;

}
uint8_t USB_send(uint8_t length, void *pvData)
{
  if(length == 0 || pvData == NULL)
    return 0;
  if(fd > 0)
    return serialPutchar(fd, (uint8_t*)pvData); 
}

uint8_t USB_receive(uint8_t length, void *pvData)
{
  if(length == 0 || pvData == NULL)
    return 0;
  if(fd > 0)
    return serialGetchar(fd, (uint8_t*)pvData);
}