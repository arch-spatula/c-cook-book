#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input = 0;

  printf("키를 입력하세요. :");
  scanf("%d%*c", &input);
  printf("결과: %s\n", input >= 150 ? "합격" : "불합격");

  return EXIT_SUCCESS;
}
