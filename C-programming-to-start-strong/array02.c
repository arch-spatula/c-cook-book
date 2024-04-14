#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5] = {10, 20, 30, 40, 50};
  int i = 0;
  for (i = 0; i < 5; ++i) {
    printf("%d\t", aList[i]);
  }
  putchar('\n');

  aList[0] = 100;
  aList[3] = 200;

  for (i = 0; i < 5; ++i) {
    printf("%d\t", aList[i]);
  }

  putchar('\n');
  return EXIT_SUCCESS;
}
/*10	20	30	40	50	*/
/*100	20	30	200	50	*/
