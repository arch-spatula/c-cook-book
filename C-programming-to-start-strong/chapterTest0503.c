#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nMax = -100, nInput = -100;
  scanf("%d", &nInput);
  nMax = nInput > nMax ? nInput : nMax;

  scanf("%d", &nInput);
  nMax = nInput > nMax ? nInput : nMax;

  scanf("%d", &nInput);
  nMax = nInput > nMax ? nInput : nMax;

  printf("MAX: %d\n", nMax);

  return EXIT_SUCCESS;
}
