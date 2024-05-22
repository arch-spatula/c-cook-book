#include <stdlib.h>

int main(void) {
  int aList[3] = {10, 20, 30};
  int *pnData = aList;
  *(pnData + 1) = 100;

  return EXIT_SUCCESS;
}
