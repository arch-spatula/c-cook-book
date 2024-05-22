#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int x = 10;
  printf("%d\n", x * 10);
  /*printf("%d\n", x * 10.0);*/ // 출력 자료형 컴파일 에러 
  printf("%d\n", x / 10);

  printf("%d\n", 5 / 2);
  /*printf("%f\n", 5 / 2);*/ // 출력 자료형 컴파일 에러
  printf("%f\n", 5.0 / 2);

  return EXIT_SUCCESS;
}
