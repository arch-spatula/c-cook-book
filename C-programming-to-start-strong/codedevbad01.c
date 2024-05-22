#include <stdio.h>
#include <stdlib.h>

int g_aList[5] = {0};

void initList(void) {
  int i = 0;
  for (i = 0; i < 5; ++i) {
    printf("정수를 입력하세요. : ");
    scanf("%d", &g_aList[i]);
  }
}

void SortList(void) {
  int i = 0, j = 0, nTmp = 0;
  for (i = 0; i < 4; ++i) {
    for (j = i + 1; j < 5; ++j) {
      if (g_aList[j] < g_aList[i]) {
        nTmp = g_aList[j];
        g_aList[j] = g_aList[i];
        g_aList[i] = nTmp;
      }
    }
  }
}

void PrintList(void) {
  int i = 0;
  for (i = 0; i < 5; ++i) {
    printf("%d\t", g_aList[i]);
  }
}

int main(void) {
  initList();
  SortList();
  PrintList();
  return EXIT_SUCCESS;
}
/*정수를 입력하세요. : 20*/
/*정수를 입력하세요. : 40*/
/*정수를 입력하세요. : 30*/
/*정수를 입력하세요. : 10*/
/*정수를 입력하세요. : 50*/
/*10	20	30	40	50	%*/
