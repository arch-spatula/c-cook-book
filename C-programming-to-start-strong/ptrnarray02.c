#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szBuffer[32] = {"You are a girl."};
  printf("%c\n", szBuffer[0]);
  printf("%c\n", *szBuffer);
  printf("%c\n", *(szBuffer + 0));

  printf("%c\n", szBuffer[5]);
  printf("%c\n", *(szBuffer + 5));

  printf("%s\n", &szBuffer[4]);
  printf("%s\n", &*(szBuffer + 4));
  printf("%s\n", szBuffer + 4);

  return EXIT_SUCCESS;
}
/*Y*/
/*Y*/
/*Y*/
/*r*/
/*r*/
/*are a girl.*/
/*are a girl.*/
/*are a girl.*/
