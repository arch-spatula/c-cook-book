#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5] = {30, 10, 40, 20, 50};
  int i = 0, nMax = aList[0];

  for (i = 1; i < 5; ++i) {
    if (aList[i] > nMax)
      nMax = aList[i];
  }

  for (i = 0; i < 5; ++i) {
    printf("%d\t", aList[i]);
  }

  putchar('\n');
  printf("MAXL %d\n", nMax);
  return EXIT_SUCCESS;
}
/*30	10	40	20	50	*/
/*MAXL 50*/
