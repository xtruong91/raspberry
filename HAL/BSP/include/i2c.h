/*
 * File: i2c.h
 * File Created: Saturday, 9th March 2019
 * Author: truongtx (truongtx91@gmail.com)
 * -----
 * Description support some I2C function for the communication with other module: 
 * Version: 0.1
 * Tool: CMake
 * -----
 * Copyright TruongTX
 */

#ifndef _I2C_H
#define _I2C_H

#include "type.h"

typedef enum _I2CMode
{
  SLAVE,
  MASTER
} EI2C_Mode;

bool I2C_init( int8_t slaveAdr);
int16_t I2C_read(uint8_t address, uint_t length, void *pdata);
int16_t I2C_Write(uint8_t address, uint8_t length, void *pData);


#endif
