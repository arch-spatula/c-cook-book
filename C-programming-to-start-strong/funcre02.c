#include <stdio.h>
#include <stdlib.h>

int factorial(int nParam) {

  int nResutl = 0;
  if (nParam == 1)
    return 1;

  nResutl = nParam * factorial(nParam - 1);
  return nResutl;
}
int main(void) {

  printf("5! == %d\n", factorial(5));
  return EXIT_SUCCESS;
}
/*5! == 120*/
