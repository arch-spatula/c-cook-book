#include <stdio.h>
#include <stdlib.h>

typedef union IP_ADDR {
  int nAddress;
  short awData[2];
  unsigned char addr[4];
} IP_ADDR;

int main(void) {
  IP_ADDR Data = {0};
  Data.nAddress = 0x41424344;

  printf("%c%c%c%c\n", Data.addr[0], Data.addr[1], Data.addr[2], Data.addr[3]);

  printf("%x, %d\n", Data.awData[0], Data.awData[0]);
  printf("%x, %d\n", Data.awData[1], Data.awData[1]);
  return EXIT_SUCCESS;
}
/*DCBA*/
/*4344, 17220*/
/*4142, 16706*/
