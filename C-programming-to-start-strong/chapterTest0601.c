#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int max = -100, input = -100;
  scanf("%d", &input);
  if (input > max)
    max = input;
  scanf("%d", &input);
  if (input > max)
    max = input;
  scanf("%d", &input);
  if (input > max)
    max = input;

  printf("MAX : %d\n", max);

  return EXIT_SUCCESS;
}
/*10*/
/*30*/
/*-10*/
/*MAX : 30*/
