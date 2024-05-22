#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char szBuffer[16] = {"Hello"};
  char *pszData = szBuffer;

  while (*pszData != '\0') {
    pszData++;
  }

  printf("Length : %ld\n", pszData - szBuffer);

  return EXIT_SUCCESS;
}
/*Length : 5*/
