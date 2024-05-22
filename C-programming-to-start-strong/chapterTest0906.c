#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5][5] = {0};
  int i = 0, j = 0;

  for (j = 0; j < 5; ++j) {
    for (i = 0; i < 5; ++i) {
      if (j % 2 == 0)
        aList[i][j] = j * 5 + i + 1;
      if (j % 2 != 0)
        aList[i][j] = j * 5 - i + 5;
    }
  }

  for (i = 0; i < 5; ++i) {
    for (j = 0; j < 5; ++j) {
      printf("%d\t", aList[i][j]);
    }
    putchar('\n');
  }
  return EXIT_SUCCESS;
}
