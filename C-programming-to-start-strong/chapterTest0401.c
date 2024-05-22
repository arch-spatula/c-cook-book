#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("두 정수를 입력하세요. : ");
  // 입력 10, 20
  int num1 = 0, num2 = 0;
  scanf("%d%d", &num1, &num2);
  // 출력 15.00
  printf("AVG : %.2f\n", (num1 + num2) / 2.0);
  return EXIT_SUCCESS;
}
