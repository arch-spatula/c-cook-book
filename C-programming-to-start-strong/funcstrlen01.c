#include <stdio.h>
#include <stdlib.h>

int getLength(const char *pszParam) {

  int nLength = 0;
  while (pszParam[nLength] != '\0') {
    nLength += 1;
  }
  return nLength;
}

int main(void) {
  char *pszData = "Hello";
  printf("%d\n", getLength("Hi"));
  printf("%d\n", getLength(pszData));

  return EXIT_SUCCESS;
}
/*2*/
/*5*/
