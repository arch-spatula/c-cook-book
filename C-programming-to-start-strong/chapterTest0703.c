#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int sum = 0;

  for (int i = 1; i <= 10; ++i) {
    sum += i;
  }
  printf("%d\n", sum);

  return EXIT_SUCCESS;
}