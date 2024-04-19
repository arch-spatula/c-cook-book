#include <stdio.h>
#include <stdlib.h>

int GetFactorial(int nParam) {
  int nResult = 1, i = 0;

  if (nParam < 1 || nParam > 10)
    return 0;

  for (i = 1; i <= nParam; ++i) {
    nResult *= i;
  }

  return nResult;
}

int main(void) {
  int nResult = 0, nInput = 0;
  printf("팩토리얼을 구할 정수(1 ~ 10)를 입력하세요. :  ");
  scanf("%d", &nInput);

  nResult = GetFactorial(nInput);

  if (nResult == 0) {
    puts("ERROR: 1 ~ 10 사이의 정수를 입력하세요.");
    return EXIT_FAILURE;
  }

  printf("Result: %d\n", nResult);

  return EXIT_SUCCESS;
}
/*팩토리얼을 구할 정수(1 ~ 10)를 입력하세요. :  5*/
/*Result: 120*/
