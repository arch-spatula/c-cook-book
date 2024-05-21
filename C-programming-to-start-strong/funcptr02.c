#include <stdio.h>
#include <stdlib.h>

int GetMax(int a, int b, int c) {
  int max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;
  return max;
}

int main(void) {
  int (*pfGetMax)(int, int, int) = GetMax;
  printf("MAX: %d\n", pfGetMax(1, 3, 2));

  return EXIT_SUCCESS;
}
/*MAX: 3*/
