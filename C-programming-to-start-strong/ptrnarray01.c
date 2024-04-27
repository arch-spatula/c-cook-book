#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5] = {0};
  int *pnData = aList;

  printf("aList[0] : %d\n", aList[0]);

  *pnData = 20;

  printf("aList[0] : %d\n", aList[0]);

  return EXIT_SUCCESS;
}
/*aList[0] : 0*/
/*aList[0] : 20*/
