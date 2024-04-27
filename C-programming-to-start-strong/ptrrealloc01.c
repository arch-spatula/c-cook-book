#include <malloc/malloc.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char *pszBuffer = NULL, *pszNewBuffer = NULL;

  pszBuffer = (char *)malloc(12);
  sprintf(pszBuffer, "%s", "TestString");
  printf("[%p] %ld %s\n", (void *)pszBuffer, malloc_size(pszBuffer), pszBuffer);

  pszNewBuffer = (char *)realloc(pszBuffer, 32);
  if (pszNewBuffer == NULL) {
    free(pszBuffer);
  }
  sprintf(pszNewBuffer, "%s", "TestStringData");
  printf("[%p] %ld %s\n", (void *)pszNewBuffer, malloc_size(pszNewBuffer),
         pszNewBuffer);
  free(pszNewBuffer);

  return EXIT_SUCCESS;
}
/*[0x600003220020] 16 TestString*/
/*[0x600003025240] 32 TestStringData*/
