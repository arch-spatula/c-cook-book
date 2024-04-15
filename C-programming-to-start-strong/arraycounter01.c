#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[3][4] = {0};
  int i = 0, j = 0, nCounter = 0;

  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 4; ++j) {
      aList[i][j] = ++nCounter;
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
/*1	2	3	4	*/
/*5	6	7	8	*/
/*9	10	11	12*/
