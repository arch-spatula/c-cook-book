#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // 실수 자료형의 메모리 사이즈 출력
  printf("%d\n", sizeof(123.456F)); // 4
  printf("%d\n", sizeof(123.456));  // 8

  // float 형을 실수형으로 출력
  printf("%f\n", 123.456F); // 123.456001

  // double형을 실수형으로 출력
  printf("%f\n", 123.456);  // 123.456000
  printf("%lf\n", 123.456); // 123.456000

  return EXIT_SUCCESS;
}
