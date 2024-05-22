#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int input = 0;

  scanf("%d%*c", &input);

  input %= 5;

  printf("%d\n", input);

  return EXIT_SUCCESS;
}
