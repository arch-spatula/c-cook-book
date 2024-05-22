#include <stdio.h>
#include <stdlib.h>

int *TestFunc(void) {
  int nData = 10;
  return &nData;
}

int main(void) {
  int *pnResult = NULL;
  pnResult = TestFunc();
  printf("%d\n", *pnResult);

  return EXIT_SUCCESS;
}
