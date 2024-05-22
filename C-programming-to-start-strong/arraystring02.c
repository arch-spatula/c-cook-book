#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szBuffer[32] = {0};
  int nLenght = 0;

  printf("Input your name : ");
  fgets(szBuffer, sizeof(szBuffer), stdin);

  while (szBuffer[nLenght] != '\0') {
		nLenght += 1;
  }

  printf("Your name is %s(%d).\n", szBuffer, nLenght);
  return EXIT_SUCCESS;
}
/*Input your name : arch-spatula*/
/*Your name is arch-spatula*/
/*(13).*/
