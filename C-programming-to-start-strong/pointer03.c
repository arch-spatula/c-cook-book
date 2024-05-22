#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char ch = 'A';
  char *pData = &ch;
  char **ppData = &pData;
  char ***pppData = &ppData;

  printf("%c\n", ch);
  printf("%c\n", *pData);
  printf("%c\n", **ppData);
  printf("%c\n", ***pppData);

  return EXIT_SUCCESS;
}
/*A*/
/*A*/
/*A*/
/*A*/
