#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szBufferLeft[32] = { 0 };
  char szBufferRight[32] = { 0 };
  scanf("%s%s", szBufferLeft, szBufferRight);
  printf("%s %s\n", szBufferLeft, szBufferRight);
  return EXIT_SUCCESS;
}
