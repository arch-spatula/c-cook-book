#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5] = {30, 40, 10, 50, 20};
  int i = 0;

  // 여기부터 코드를 작성할 수 있습니다.
  for (i = 1; i < 5; ++i) {
    if (aList[i] > aList[0])
      aList[0] = aList[i];
  }
  // 여기까지 코드를 작성할 수 있습니다.
  for (i = 0; i < 5; ++i) {
    printf("%d\t", aList[i]);
  }

  putchar('\n');
  printf("MAX: %d\n", aList[0]);
  return EXIT_SUCCESS;
}
/*50	40	10	50	20	*/
/*MAX: 50*/
