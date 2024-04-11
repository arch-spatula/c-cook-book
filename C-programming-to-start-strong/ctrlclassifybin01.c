#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nInput = 0;
  char ch = 'A';

  printf("점수를 입력하세요: ");
  scanf("%d", &nInput);

  if (nInput >= 80) {
    if (nInput >= 90)
      ch = 'A';
    else
      ch = 'B';
  } else {
    if (nInput >= 70)
      ch = 'C';
    else
      ch = 'D';

    if (nInput < 60)
      ch = 'F';
  }

  printf("%c\n", ch);
  return EXIT_SUCCESS;
}
/*점수를 입력하세요: 85*/
/*B*/
/*점수를 입력하세요: 59*/
/*F*/
