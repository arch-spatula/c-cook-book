#include <stdio.h>
#include <stdlib.h>

int add(int *a, int *b) { return *a + *b; }

int main(void) {
  int a = 3, b = 4;
  printf("%d\n", add(&a, &b));
  return EXIT_SUCCESS;
}
/*7*/
