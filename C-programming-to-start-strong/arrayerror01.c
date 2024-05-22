#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5] = {10, 20, 30, 40, 50};
  int aListNew[5] = {0};
  int i = 0;

  aListNew = aList;

  for (i = 0; i < 5; ++i) {
    printf("%d\t", aList[i]);
  }

  putchar('\n');
  return EXIT_SUCCESS;
}
