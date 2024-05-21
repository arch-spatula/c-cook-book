#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int GetMax(int nCount, ...) {

  int nMax = -9999, nParam = 0, i = 0;
  char *plist = NULL;

  va_start(plist, nCount);
  for (i = 0; i < nCount; ++i) {
    nParam = va_arg(plist, int);
    if (nParam > nMax)
      nMax = nParam;
  }
  va_end(plist);

  return nMax;
}

int main(void) {
  printf("MAX: %d\n", GetMax(3, 10, 30, 20));
  printf("MAX: %d\n", GetMax(4, 40, 10, 30, 20));
  printf("MAX: %d\n", GetMax(5, 40, 10, 50, 30, 20));
  return EXIT_SUCCESS;
}
/*MAX: 30*/
/*MAX: 40*/
/*MAX: 50*/
