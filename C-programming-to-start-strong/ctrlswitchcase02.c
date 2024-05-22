#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char chCredit = 'x';
  int nInput = 0;

  printf("점수를 입력하세요. : ");
  scanf("%d", &nInput);

  switch (nInput / 10) {
  case 10:
  case 9:
    chCredit = 'A';
    break;
  case 8:
    chCredit = 'B';
    break;
  case 7:
    chCredit = 'C';
    break;
  case 6:
    chCredit = 'D';
    break;
  default:
    chCredit = 'F';
  }

  printf("학점 : %c\n", chCredit);

  return EXIT_SUCCESS;
}

/*점수를 입력하세요. : 95*/
/*학점 : A*/
