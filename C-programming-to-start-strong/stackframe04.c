#include <stdlib.h>
#include <string.h>

int main(void) {
  int nData = 10;
  char *pszBuffer = NULL;
  pszBuffer = (char *)malloc(12);
  strcpy(pszBuffer, "Hello");
  free(pszBuffer);

  return EXIT_SUCCESS;
}
