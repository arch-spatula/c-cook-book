#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int nData = 0x11223344;

  printf("%08x\n", nData & 0x00FFFF00);
  printf("%08x\n", nData | 0x2211FFFF);
  printf("%08x\n", nData ^ 0x2211FFFF);
  printf("%08x\n", ~nData);
  printf("%08x\n", nData >> 8);
  printf("%08x\n", nData << 16);

  return EXIT_SUCCESS;
}
/*00223300*/
/*3333ffff*/
/*3333ccbb*/
/*eeddccbb*/
/*00112233*/
/*00001122*/
