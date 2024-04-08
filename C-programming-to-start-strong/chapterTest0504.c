#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nResult, w = 0, x = -1, y = -1, z = 1;

  printf("%d\n", ++y || ++z);
  /*nResult = w++ || x++ && ++y || ++z;*/
  /*printf("%d %d %d %d %d\n", w, x, y, z, nResult); // 1 0 0 2 1*/
  return EXIT_SUCCESS;
}
