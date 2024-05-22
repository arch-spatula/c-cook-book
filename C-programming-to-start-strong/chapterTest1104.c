#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szBuffer[12] = {"HelloWorld"};
  char *pszData = NULL;

  pszData = (char *)malloc(sizeof(char) * 12);
  sprintf(pszData, "%s", szBuffer);
  puts(pszData);

  if (pszData == NULL) {
    free(pszData);
  }

  return EXIT_SUCCESS;
}
