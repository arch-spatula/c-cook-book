#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5] = {30, 40, 10, 50, 20};
  int i = 0, j = 0, nTmp = 0;

	// 4 3 2 1
  for (i = 4; i > 0; --i) {
    for (j = 0; j < i; ++j) {
      // 앞 aList[j] 뒤 aList[j + 1]
      if (aList[j] > aList[j + 1]) {
        nTmp = aList[j];
        aList[j] = aList[j + 1];
        aList[j + 1] = nTmp;
      }
    }
  }

  for (i = 0; i < 5; ++i) {
    printf("%d\t", aList[i]);
  }
  putchar('\n');

  return EXIT_SUCCESS;
}
