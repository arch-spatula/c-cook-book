#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5][5] = {0};
  int i = 0, j = 0, nCounter = 0, x = -1, y = 0, nLength = 9,
      nDirection = 1; // dir은 방향 1 상 2 우 3 하 4 좌
  for (nLength = 9; nLength > 0; nLength -= 2) {
    for (i = 0; i < nLength; ++i) {
      if (i < nLength / 2 + 1)
        x += nDirection;
      else
        y += nDirection;
      aList[y][x] = ++nCounter;
    }
    nDirection = -nDirection;
  }

  for (i = 0; i < 5; ++i) {
    for (j = 0; j < 5; ++j) {
      printf("%d\t", aList[i][j]);
    }
    putchar('\n');
  }

  /*printf("dir : %d, %02d [%d][%d]\n", dir, nCounter, i, j);*/
  return EXIT_SUCCESS;
}
