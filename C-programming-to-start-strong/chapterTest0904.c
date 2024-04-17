#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5][5] = {0};
  int i = 0, j = 0;

  for (i = 0; i < 5; ++i) {
    for (j = 0; j < 5; ++j) {
      if (i % 2 == 0)
        aList[i][j] = i * 5 + j + 1;
      if (i % 2 != 0)
        aList[i][j] = i * 5 - j + 5;
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
/*1	2	3	4	5	*/
/*10	9	8	7	6	*/
/*11	12	13	14	15	*/
/*20	19	18	17	16	*/
/*21	22	23	24	25*/
