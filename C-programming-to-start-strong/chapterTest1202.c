#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findCahr(char *str, char *charSet) {
  int result = 0;
  result = strstr(str, charSet) - str;
  if (result < 0) {
    return -1;
  }

  return result;
}

int main(void) {
  char szBuffer[128] = {0};
  char szSet[128] = {0};

  printf("Input string: ");
  fgets(szBuffer, sizeof(szBuffer), stdin);

  printf("Input character set: ");
  fgets(szSet, sizeof(szSet), stdin);

  printf("%d\n", findCahr(szBuffer, szSet));
  return EXIT_SUCCESS;
}
