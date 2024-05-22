#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /*int aList[5] = {30, 40, 10, 50, 20};*/
  char szBuffer[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

  char szData[8] = {"Hello"};

  char *pszBuffer = "Hello";

  puts(szBuffer);
  puts(szData);
  puts(pszBuffer);

  return EXIT_SUCCESS;
}
/*Hello*/
/*Hello*/
/*Hello*/
