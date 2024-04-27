#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *pList = NULL, i = 0;

  pList = (int *)malloc(sizeof(int) * 3); // 정수 3개 만큼 공간 확보

  pList[0] = 10;
  pList[1] = 20;
  pList[2] = 30;

  for (i = 0; i < 3; ++i) {
    printf("%d\n", pList[i]);
  }

  free(pList);
  return EXIT_SUCCESS;
}
/*10*/
/*20*/
/*30*/
