#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char szBuffer[128] = {"nData = x + y;\nnResult = a * b;"};
  char *szSep = " *-+=%;\n";
  char *pszToken = NULL;

  pszToken = strtok(szBuffer, szSep);
  while (pszToken != NULL) {
    puts(pszToken);
    pszToken = strtok(NULL, szSep);
  }

  printf("\nszBuffer: %s\n", szBuffer);
  return EXIT_SUCCESS;
}
/*nData*/
/*x*/
/*y*/
/*nResult*/
/*a*/
/*b*/

/*szBuffer: nData*/
