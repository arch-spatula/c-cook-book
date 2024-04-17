#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5] = {30, 40, 10, 50, 20};
  int i = 0, j = 0, nMinIndex = 0, nTmp = 0;

  for (i = 0; i < 5; ++i) {
    // 가장 작은 값을 순회할 때 시작하는 곳에 둠
    nMinIndex = i;
    for (j = i + 1; j < 5; ++j) {
      // 더 작은 값이 있으면 갱신
      if (aList[nMinIndex] > aList[j]) {
        nMinIndex = j;
      }
    }

    // 같은 값에 메모리 쓰기는 불필요하게 동작횟수로 성능을 낭비함
    if (i != nMinIndex) {
      // 가장 작은 인덱스를 기준으로 교환
      nTmp = aList[i];
      aList[i] = aList[nMinIndex];
      aList[nMinIndex] = nTmp;
    }
  }

  for (i = 0; i < 5; ++i) {
    printf("%d\t", aList[i]);
  }
  putchar('\n');

  return EXIT_SUCCESS;
}
