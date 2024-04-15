#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[3][4] = {
      {10, 20, 30},
      {40, 50, 60},
  };
  int i = 0, j = 0;

  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 4; ++j) {
      if (j < 3) {
        aList[i][3] += aList[i][j];
        if (i < 2) {
          aList[2][j] += aList[i][j];
        }
      }
    }
  }

  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 4; ++j) {
      printf("%d\t", aList[i][j]);
    }
    putchar('\n');
  }

  return EXIT_SUCCESS;
}
/*10	20	30	60	*/
/*40	50	60	150	*/
/*50	70	90	210*/
