#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 10;

  x = x + 1;
  printf("%d\n", x); // 11

  x += 1;
  printf("%d\n", x); // 12

  ++x;
  printf("%d\n", x); // 13

  return EXIT_SUCCESS;
}
