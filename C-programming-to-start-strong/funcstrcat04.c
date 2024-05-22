#include <stdio.h>
#include <stdlib.h>

char *mystrcat(char *pszDst, char *pszSrc) {

  while (*pszDst != '\0') {
    ++pszDst;
  }

  while (*pszSrc != '\0') {
    *pszDst++ = *pszSrc++;
  }
  *++pszDst = '\0';

  return --pszDst;
}

int main(void) {
  char szPath[128] = {0};
  char *pszEnd = NULL;

  pszEnd = mystrcat(szPath, "C:\\Program File\\");
  pszEnd = mystrcat(pszEnd, "CHS\\");
  pszEnd = mystrcat(pszEnd, "C programming");

  puts(szPath);

  return EXIT_SUCCESS;
}
/*C:\Program File\CHS\C programming*/
