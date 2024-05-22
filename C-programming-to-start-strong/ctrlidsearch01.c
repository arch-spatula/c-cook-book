#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nInput = 0;
  scanf("%d", &nInput);

  if (nInput > 10) {
    int nInput = 20;
    printf("%d\n", nInput);

    if (nInput < 20) {
      int nInput = 30;
      printf("%d\n", nInput);
    }
  }

  printf("%d\n", nInput);

  return EXIT_SUCCESS;
}
/*11*/
/*20*/
/*11*/
