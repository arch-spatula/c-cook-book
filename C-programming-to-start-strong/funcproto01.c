#include <stdio.h>
#include <stdlib.h>

int Add(int, int);

int main(void) {

  printf("%d\n", Add(3, 4));
  return EXIT_SUCCESS;
}
/*7*/

int Add(int x, int y) { return x + y; }
