#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nInput = 0;

  printf("점수를 입력하세요. : ");
  scanf("%d%*c", &nInput);

  if (nInput >= 70)
    printf("합격입니다.\n");
  else
    printf("불합격입니다.\n");

  return EXIT_SUCCESS;
}
/*점수를 입력하세요. : 80*/
/*합격입니다.*/
