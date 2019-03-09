/*
 * File: i2c.c
 * File Created: Saturday, 9th March 2019
 * Author: truongtx (truongtx91@gmail.com)
 * -----
 * Description: 
 * Version: 0.1
 * Tool: CMake
 * -----
 * Copyright TruongTX
 */
#include "i2c.h"
#include <wiringPiI2C.h>

bool I2C_init( int8_t slaveAddr)
{
  if(wiringPiI2CSetup(slaveAddr) > 0)
  {
    return 1;
  }else
  {
    return 0;
  }  
}
int16_t I2C_read(uint8_t slaveAddr, uint_t length, void *pvData)
{
  if(pvData == NULL || length == 0)
  {
    return 0;
  }
  int fd = wiringPiI2CSetup(slaveAddr);  
  if(fd > 0)
    return wiringPiI2CWrite(fd, (int*)pvData);
  else 
    return 0;

}
int16_t I2C_Write(uint8_t slaveAddr, uint8_t length, void *pvData)
{
  if(pvData == NULL || length == 0)
  {
    return 0;
  }
  int fd = wiringPiI2CSetup(slaveAddr);  
  if(fd > 0)
    return wiringPiI2CWrite(fd, (int*)pvData);
  else 
    return 0;
}

