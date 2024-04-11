#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nAge = 0;
  printf("나이를 입력하세요. : ");
  scanf("%d", &nAge);
  if (nAge >= 20) {
    printf("당신의 나이는 %d세 입니다.\n", nAge);
  }
  printf("End");

  return EXIT_SUCCESS;
}
/*나이를 입력하세요. : 20*/
/*당신의 나이는 20세 입니다.*/
/*End%*/
