#include <stdio.h>
#include <stdlib.h>

#define MAX_BUF_SIZE 32

int main(void) {
  char *pszBuffer = NULL;
  pszBuffer = (char *)malloc(MAX_BUF_SIZE);
  fgets(pszBuffer, sizeof(pszBuffer), stdin);
  puts(pszBuffer);

  free(pszBuffer);

  return EXIT_SUCCESS;
}
/*Hong gildong*/
/*Hong gi*/
