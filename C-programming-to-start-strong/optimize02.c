#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b) {
  int nResult = 0;
  nResult = a + b;
  return nResult;
}

int main(void) {
  int nResult = 0, x, y;
  scanf("%d %d", &x, &y);
  nResult = Add(x, y);
  printf("%d\n", nResult);
  return EXIT_SUCCESS;
}
/*3 4*/
/*7*/
