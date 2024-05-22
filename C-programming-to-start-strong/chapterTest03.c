#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int age = 0;
  printf("나이를 입력하세요. : ");
  scanf("%d", &age);
  while (getchar() != '\n') {
    continue;
  }

  char name[32] = {0};
  printf("\n이름을 입력하세요. : ");
  scanf("%s", name);
  while (getchar() != '\n') {
    continue;
  }

  printf("\n 당신의 나이는 %d살이고 이름은 \'%s\'입니다.\n", age, name);

  return EXIT_SUCCESS;
}
