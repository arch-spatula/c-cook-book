#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("%08x\n", 0xFFFFFFFF & 0x00080000);
  printf("%08x\n", 0xAAAABBBB & 0x00080000);
  printf("%08x\n", 0xAABBCCDD & 0x00080000);

  printf("%08x\n", 0xFFFFFFFF | 0x00080000);
  printf("%08x\n", 0x11223344 | 0x00080000);
  printf("%08x\n", 0x00000000 | 0x000F0000);

  return EXIT_SUCCESS;
}
/*00080000*/
/*00080000*/
/*00080000*/
/*ffffffff*/
/*112a3344*/
/*000f0000*/
