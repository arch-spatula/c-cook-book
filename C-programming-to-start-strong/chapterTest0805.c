#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szBuffer[32] = {0};
  int nLenght = 0;

  scanf("%s%*c", szBuffer);

  while (szBuffer[nLenght] != '\0') {
    nLenght += 1;
  }

	nLenght /= 3;

  printf("Your name is %s(%d).\n", szBuffer, nLenght);
  return EXIT_SUCCESS;
}
