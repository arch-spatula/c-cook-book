#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 0, y = 0;
  x = y = 10;
  printf("%d, %d\n", x, y); // 10, 10
  return EXIT_SUCCESS;
}
