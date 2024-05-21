#include <stdio.h>
#include <stdlib.h>

int MyCompare(const void *pParamPre, const void *pParamPost) {
  return *(int *)pParamPre - *(int *)pParamPost;
}

int main(void) {
  int aList[5] = {30, 10, 40, 50, 20};
  int i = 0;
  qsort(aList, 5, sizeof(int), MyCompare);

  for (i = 0; i < 5; ++i) {
    printf("%d\n", aList[i]);
  }

  return EXIT_SUCCESS;
}
/*10*/
/*20*/
/*30*/
/*40*/
/*50*/
