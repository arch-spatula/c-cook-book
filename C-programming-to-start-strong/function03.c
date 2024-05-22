#include <stdio.h>
#include <stdlib.h>

int GetFactorial(int a, int b, int c) {

  int nMax = a;
  if (b > nMax)
    nMax = b;
  if (c > nMax)
    nMax = c;

  return nMax;
}

int main(void) {
  int nResutl = 0;

  printf("MAX: %d\n", GetFactorial(1, 2, 3));
  printf("MAX: %d\n", GetFactorial(2, 3, 1) * 2);
  printf("MAX: %d\n", nResutl = GetFactorial(3, 1, 3));

  return EXIT_SUCCESS;
}
/*MAX: 3*/
/*MAX: 6*/
/*MAX: 3*/
