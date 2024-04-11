#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input = 0, i = 0, max = 0;

INPUT:
  scanf("%d", &input);
  i += 1;

  if (input < 0)
    input = 0;
  if (input > 100)
    input = 100;

  if (input >= max)
    max = input;

  if (i < 5)
    goto INPUT;

  printf("Max : %d\n", max);

  return EXIT_SUCCESS;
}
