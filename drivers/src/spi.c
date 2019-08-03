/*
 * File: spi.c
 * File Created: Saturday, 9th March 2019
 * Author: truongtx (truongtx91@gmail.com)
 * -----
 * Description: 
 * Version: 0.1
 * Tool: CMake
 * -----
 * Copyright TruongTX
 */

#include "spi.h"
#include <wiringPiSPI.h>

bool SPI_Init(const sSPIConfig *pConfig)
{
  //TODO
  return TRUE;
}
uint8_t SPI_Send(uint8_t length, void *pvData)
{
  //TODO
  return 0;
}

uint8_t SPI_Receive(uint8_t length, void *pvData)
{
  //TODO
  return 0;
}