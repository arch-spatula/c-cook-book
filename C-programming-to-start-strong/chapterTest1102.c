#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szBuffer[32] = {"You are a girl."};
  char *pszData = szBuffer + 4;

  printf("%c\n", szBuffer[0]);
  printf("%c\n", pszData[0]);
  printf("%c\n", pszData[6]);

  printf("%s\n", szBuffer + 4);
  printf("%s\n", pszData);
  printf("%s\n", pszData + 4);

  return EXIT_SUCCESS;
}
/*Y*/
/*a*/
/*g*/
/*are a girl.*/
/*are a girl.*/
/*a girl.*/
