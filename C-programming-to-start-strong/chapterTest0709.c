#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int count = 0, sum = 0;

  for (int i = 1; i <= 100; ++i) {
    if (i % 4 == 0) {
      count += 1;
      sum += i;
    }
  }

  printf("%d, %d\n", count, sum);

  return EXIT_SUCCESS;
}
