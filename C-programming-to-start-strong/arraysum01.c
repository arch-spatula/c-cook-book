#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[3][4] = {
      {10, 20, 30, 40},
      {50, 60, 70, 80},
      {90, 100, 110, 120},
  };

  int i = 0, j = 0;

  aList[0][4] = 300;

  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 4; ++j) {
      printf("%d\t", aList[i][j]);
    }
    putchar('\n');
  }

  return EXIT_SUCCESS;
}
