#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 10;
  int *pnData = &x;

  printf("x : %d\n", x);

  *pnData = 20;

  printf("x : %d\n", x);

  return EXIT_SUCCESS;
}
/*x : 10*/
/*x : 20*/
