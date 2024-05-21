#include <stdio.h>
#include <stdlib.h>

int __stdcall GetMax(int a, int b, int c) {
  int max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;
  return max;
}

int __cdecl main(void) {
  int nResult = 0;
  nResult = GetMax(1, 2, 3);
  printf("%d\n", nResult);

  return EXIT_SUCCESS;
}
