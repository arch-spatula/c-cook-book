#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nInput = 0, nSelect = 0;
  scanf("%d", &nInput);

  nSelect = nInput <= 10 ? 10 : 20;
  printf("%d\n", nSelect);

  return EXIT_SUCCESS;
}
/*5*/
/*10*/
