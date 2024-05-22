#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int age = 0, cost = 1000;
  scanf("%d", &age);
  if (age < 20) {
    cost = cost * 75 / 100;
  }

  printf("최종요금: %d원\n", cost);
  return EXIT_SUCCESS;
}
/*17*/
/*최종요금: 750원*/
