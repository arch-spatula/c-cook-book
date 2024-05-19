#include <stdlib.h>

int main(void) {
  int nData = 10;
  int nData2 = 10;

  const int *pnData = &nData;

  int *const pnNewData = &nData;

  *pnData = 10;
  pnNewData = NULL;

  return EXIT_SUCCESS;
}
