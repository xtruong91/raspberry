// gcc -Wall spi-send.c -o spi-send -lwiringPi

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <wiringPi.h>
#include <wiringPiSPI.h>

#define chanel 0
#define speed 500000
#define	SS0	8

char rxbuffer;
int main() {

  unsigned char txbBuff[4] = "abc\n";
  wiringPiSetupGpio();
  pinMode(SS0, OUTPUT);
  digitalWrite(SS0, 1);
  int fd;
  if( (wiringPiSPISetup(chanel, speed)) <0){
    fprintf (stderr, "SPI Setup failed: %s\n", strerror (errno));
    return 0;
  }
  fd = wiringPiSPIGetFd (0) ;

  while(1){
    // printf("%s",txbBuff);
    // fflush(stdout);
    // digitalWrite(SS0, 0);
    // write (fd, txbBuff, 4) ;
    // delayMicroseconds(20);
    read (fd, &rxbuffer, 1);
    digitalWrite(SS0, 1);
    printf(",Receive:%d\n",rxbuffer);
    fflush(stdout);
    delay(1000);
  }
  return 0;
}
