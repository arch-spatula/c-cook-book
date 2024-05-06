#include <stdio.h>
#include <stdlib.h>

void MyStrcpy(char *dist, int size, char *target) {
  int nLength = 0;
  while (target[nLength] != '\0' && nLength <= size) {
    dist[nLength] = target[nLength];
    nLength += 1;
  }
}

int main(void) {
  char szBufferSrc[12] = {"TestString"};
  char szBufferDst[12] = {0};

  MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
  puts(szBufferDst);
  return EXIT_SUCCESS;
}
