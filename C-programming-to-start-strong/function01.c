#include <stdio.h>
#include <stdlib.h>

int GetFactorial(int a, int b) {
  int nData = 0;
  nData = a + b;
  return nData;
}

int main(void) {
  int nResutl = 0;

  nResutl = GetFactorial(3, 4);
  printf("Result: %d\n", nResutl);

  return EXIT_SUCCESS;
}
/*Result : 7*/
