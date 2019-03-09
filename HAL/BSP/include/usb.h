/*
 * File: usb.h
 * File Created: Saturday, 9th March 2019
 * Author: truongtx (truongtx91@gmail.com)
 * -----
 * Description: Provide API for communating with the other module via USB
 * Version: 0.1
 * Tool: CMake
 * -----
 * Copyright TruongTX
 */

#ifndef _USB_H
#define _USB_H

#include "type.h"

bool USB_init();
uint8_t USB_send(uint8_t length, void *pvData);
uint8_t USB_receive(uint8_t length, void *pvData);

#endif
