#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nResult = 0, nData = 10;

  nResult += 3;
  printf("%d\n", nResult); // 3

  nResult *= nData;
  printf("%d\n", nResult); // 30

  nResult /= 2;
  printf("%d\n", nResult); // 15

  nResult -= 5;
  printf("%d\n", nResult); // 10

  nResult %= 3;
  printf("%d\n", nResult); // 1

  return EXIT_SUCCESS;
}
