#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nResult; // 그냥 0으로 초기화 안하고 컴파일러 에러 발생

  nResult += 10;
  nResult += 10;
  nResult += 10;

  printf("Result :%d\n", nResult);
  return EXIT_SUCCESS;
}
