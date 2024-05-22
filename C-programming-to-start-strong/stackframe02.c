#include <stdlib.h>

int main(void) {
  int x = 10, y = 20;
  int *pnData = &x;

  *pnData = 100;

  return EXIT_SUCCESS;
}
