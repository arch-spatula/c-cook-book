#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input = 0, idx = 0;

  scanf("%d%*c", &input);

  while (idx != input) {
    printf("*");
    idx += 1;
  }
  printf("\n");

  return EXIT_SUCCESS;
}
