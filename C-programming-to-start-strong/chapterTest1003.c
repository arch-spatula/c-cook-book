#include <stdio.h>
#include <stdlib.h>

int GetFee(int price, int age) {
  if (age > 19)
    return price;
  if (age > 13)
    return price * 75 / 100;
  if (age > 3)
    return price * 50 / 100;
  return 0;
}

int main(void) {
  int price = 0, age = 0;

  printf("요금을 입력하세요. : ");
  scanf("%d", &price);

  printf("나이를 입력하세요. : ");
  scanf("%d", &age);

  printf("최종요금 : %d원\n", GetFee(price, age));

  return EXIT_SUCCESS;
}
