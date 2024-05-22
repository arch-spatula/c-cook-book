#include <stdio.h>
#include <stdlib.h>

#define ADD(a, b) (a + b)

int Add(int a, int b) { return a + b; }

int main(void) {
  printf("%d\n", Add(3, 4));
  printf("%d\n", ADD(3, 4));

  return EXIT_SUCCESS;
}
/*7*/
/*7*/
