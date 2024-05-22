#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 0, nFcat = 1;
  for (i = 5; i >= 1; --i) {
    nFcat *= i;
  }
  printf("5! == %d\n", nFcat);

  return EXIT_SUCCESS;
}
/*5! == 120*/
