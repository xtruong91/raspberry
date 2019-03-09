/*
 * File: spi.h
 * File Created: Saturday, 9th March 2019 
 * Author: truongtx (truongtx91@gmail.com)
 * -----
 * Description : provide API for communating with the other module via SPI 
 * Version: 0.1
 * Tool: CMake
 * -----
 * Copyright TruongTX
 */


#ifndef _SPI_H
#define _SPI_H

#include "type.h"

typedef enum _SPISpeed
{
  B_500KHz
}eSPISpeed;

typedef struct _SPIConfig
{
  eSPISpeed Speed;
  uint8_t Pin;
}sSPIConfig;

bool SPI_Init(const sSPIConfig *pConfig);
uint8_t SPI_Send(uint8_t length, void *pvData);
uint8_t SPI_Receive(uint8_t length, void *pvData);


#endif