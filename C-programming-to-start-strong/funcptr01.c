#include <stdio.h>
#include <stdlib.h>

int __cdecl main(void) {
  void *pData = main;
  printf("%p\n", main);
  printf("%p\n", pData);

  return EXIT_SUCCESS;
}
/*0x1020d7f34*/
/*0x1020d7f34*/
