#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 10, y = 20, nTemp = 0;
  printf("Before : x=%d, y=%d\n", x, y);

  nTemp = x;
  x = y;
  y = nTemp;

  printf("After  : x=%d, y=%d\n", x, y);
  return EXIT_SUCCESS;
}
/*Before : x=10, y=20*/
/*After  : x=20, y=10*/
