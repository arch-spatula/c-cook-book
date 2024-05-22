#include <stdio.h>
#include <stdlib.h>

void initList(int *pList, int nSize) {
  int i = 0;
  for (i = 0; i < nSize; ++i) {
    printf("정수를 입력하세요. : ");
    scanf("%d", &pList[i]);
  }
}

void SortList(int *pList, int nSize) {
  int i = 0, j = 0, nTmp = 0;
  for (i = 0; i < nSize - 1; ++i) {
    for (j = i + 1; j < 5; ++j) {
      if (pList[j] < pList[i]) {
        nTmp = pList[j];
        pList[j] = pList[i];
        pList[i] = nTmp;
      }
    }
  }
}

void PrintList(int *pList, int nSize) {
  int i = 0;
  for (i = 0; i < nSize; ++i) {
    printf("%d\t", pList[i]);
  }
}

int main(void) {
  int aList[5] = {0};
  initList(aList, 5);
  SortList(aList, 5);
  PrintList(aList, 5);

  return EXIT_SUCCESS;
}
/*정수를 입력하세요. : 20*/
/*정수를 입력하세요. : 40*/
/*정수를 입력하세요. : 30*/
/*정수를 입력하세요. : 10*/
/*정수를 입력하세요. : 50*/
/*10	20	30	40	50	%*/
