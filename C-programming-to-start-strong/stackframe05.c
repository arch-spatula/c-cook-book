#include <stdlib.h>

int add(int a, int b) {
  int nResult = 0;
  nResult = a + b;
  return nResult;
}

int main(void) {
  int nResult = 0;
  nResult = add(3, 4);
  return EXIT_SUCCESS;
}
