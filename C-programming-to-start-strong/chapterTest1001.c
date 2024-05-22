#include <stdio.h>
#include <stdlib.h>

int GetData(void) {
  int input = 0;
  scanf("%d", &input);
  return input;
}

int GetMax(int a, int b, int c) {
  int max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;
  return max;
}

int main(void) {
  int aList[3] = {0};
  int nMax = -9999, i = 0;

  for (i = 0; i < 3; ++i) {
    printf("정수를 입력하세요. : ");
    aList[i] = GetData();
  }

  nMax = GetMax(aList[0], aList[1], aList[2]);

  printf("%d, %d, %d 중 가장 큰 수는 %d 입니다.\n", aList[0], aList[1],
         aList[2], nMax);

  return EXIT_SUCCESS;
}

/*정수를 입력하세요. : 3*/
/*정수를 입력하세요. : 2*/
/*정수를 입력하세요. : 1*/
/*3, 2, 1 중 가장 큰 수는 3 입니다.*/
