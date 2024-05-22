#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int nInput = 0, bResult = 0;

  scanf("%d%*c", &nInput);
  bResult = 3 < nInput < 20;

  printf("Result : %d (1:True, 0:False)\n", bResult);

  return EXIT_SUCCESS;
}
