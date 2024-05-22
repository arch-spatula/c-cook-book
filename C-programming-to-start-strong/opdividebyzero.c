#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nInput = 0;
  printf("정수를 입력하세요. : ");

  scanf("%d", &nInput);

  printf("%d\n", 10 / nInput);
  return EXIT_SUCCESS;
}
