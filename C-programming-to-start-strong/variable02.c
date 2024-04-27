#include <stdio.h>
#include <stdlib.h>

int TestFunc(void) {
  static int nData = 10;
  ++nData;
  return nData;
}

int main(void) {
  printf("%d\n", TestFunc());
  printf("%d\n", TestFunc());
  printf("%d\n", TestFunc());

  return EXIT_SUCCESS;
}
/*11*/
/*12*/
/*13*/
