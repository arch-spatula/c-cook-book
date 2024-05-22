#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b) {
  int nResult = 0;
  nResult = a + b;
  return nResult;
}

__inline int NewAdd(int a, int b) {
  int nResult = 0;
  nResult = a + b;
  return nResult;
}

int main(void) {
  printf("%d\n", Add(3, 4));
  printf("%d\n", NewAdd(3, 4));

  return EXIT_SUCCESS;
}
/*7*/
/*7*/
