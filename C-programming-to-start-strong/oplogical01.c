#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int nInput = 0, bResult = 0;

  scanf("%d%*c", &nInput);
  bResult = nInput < 4 || nInput >= 60;

  printf("Result : %d (1:True, 0:False)\n", bResult);

  return EXIT_SUCCESS;
}
/*42*/
/*Result : 0 (1:True, 0:False)*/
