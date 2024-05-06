#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char szBuffer[128] = {0};
  char szSet[128] = {0};
  char *pszStart = szBuffer;

  printf("Input string: ");
  fgets(szBuffer, sizeof(szBuffer), stdin);

  printf("Input character set: ");
  fgets(szSet, sizeof(szSet), stdin);

  while ((pszStart = strpbrk(pszStart, szSet)) != NULL) {
    printf("[%p], index: %ld, %c \n", (void *)pszStart, pszStart - szBuffer,
           *pszStart);
    pszStart++;
  }

  return EXIT_SUCCESS;
}
/*Input string: Test string data*/
/*Input character set: sa*/
/*[0x16bc2b052], index: 2, s*/
/*[0x16bc2b055], index: 5, s*/
/*[0x16bc2b05d], index: 13, a*/
/*[0x16bc2b05f], index: 15, a*/
/*[0x16bc2b060], index: 16,*/
