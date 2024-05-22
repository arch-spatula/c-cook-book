#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double aRate[10] = {
      0.0, 0.1, 0.25, 0.5, 0.5, 0.6, 0.65, 0.8, 0.82, 0.97,
  };
  int nAge = 0, i = 0, nFee = 1000;

  printf("요금표\n");
  for (i = 1; i <= 10; ++i) {
    printf("%d세 요금 :\t%d원\n", i, (int)(nFee * aRate[i - 1]));
  }
  putchar('\n');

  printf("나이를 입력하세요. : ");
  scanf("%d", &nAge);
  if (nAge < 1)
    nAge = 1;
  else if (nAge > 10)
    nAge = 10;

  printf("최종요금 : %d원\n", (int)(nFee * aRate[nAge - 1]));
  putchar('\n');

  return EXIT_SUCCESS;
}
