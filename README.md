# Raspberry P1 Platform

Build linux platform base Raspberry Pi  

## Hardware 

![Architectual Hardware](docs/hardware.PNG?raw=true)
- Processor: Broadcom BCM2835
- CPU: ARM 1176JZFS (ARM 11 w/v6 core, floating pt @ 700MHz)
- GPU: Videocore IV GPU
- RAM: 512 MB
- USB: 2 USB 2.0
- Network: Enthernet
- Video out: HMDI
- Audio out: 3.5 mm jack
- SD Card Storage (Up to 32 GB)
- Micro USB power
- Display Serial Interface Port (DSI)
- Camera Serial Interface Port (CSI)

## Getting Started
 
How to build 

`mkdir build && cd build`
`cmake .. -DCMAKE_TOOLCHAIN_FILE=../toolchain-rpi.cmake`
`make`

## Architectual Software

1. drivers: wrapper wiringPi for support the upper layer such as SPI, UART, USB, Audio, Video, SDCard..etc
2. board support package(bsp): provide interface to connect the other module.
3. modules: provice service for application.
3. libs: contain useful library
4. tool: used to compile cross-platform.
