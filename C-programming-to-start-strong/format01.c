#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("%d\n", 1234);
  printf("%d, %d\n", 1234, -5678);
  // 부호를 붙여 출력
  // +을 출력하는 것은 아님
  printf("%+d, %+d\n", 1234, -5678);

  // 정수를 8자리로 맞추고 오른쪽 정렬
  printf("%8d\n", 1234);
  // 오른쪽 정렬하고 공백은 0으로 채움
  printf("%08d\n", 1234);
  // 왼쪽 정렬
  printf("%-8d\n", 1234);

  return EXIT_SUCCESS;
}
