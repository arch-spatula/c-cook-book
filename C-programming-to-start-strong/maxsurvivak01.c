#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nMax = 0, nInput = 0;
  scanf("%d", &nInput);
  nMax = nInput;

  scanf("%d", &nInput);
  nMax = nInput > nMax ? nInput : nMax;

  scanf("%d", &nInput);
  nMax = nInput > nMax ? nInput : nMax;

  printf("MAX: %d\n", nMax);
  return EXIT_SUCCESS;
}
