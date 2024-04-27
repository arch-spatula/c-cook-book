#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char szBuffer[16] = {"Hello"};
  char *pszData = szBuffer;
  int nLength = 0;
  while (*pszData != '\0') {
    pszData++;
    nLength++;
  }

  printf("Length : %d\n", nLength);
  printf("Length : %lu\n", strlen(szBuffer));
  printf("Length : %lu\n", strlen("World"));

  return EXIT_SUCCESS;
}
/*Length : 5*/
/*Length : 5*/
/*Length : 5*/
