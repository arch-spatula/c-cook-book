#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nData = 10;

  printf("%s\n", "nData");
  printf("%d\n", nData);
  printf("%p\n", (void *)(&nData));

  return EXIT_SUCCESS;
}
/*nData*/
/*10*/
/*0x16dc670f8*/
