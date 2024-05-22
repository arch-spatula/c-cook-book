#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szBuffer[32];
  int nResult = 0;

  printf("Input string: ");
  fgets(szBuffer, 32, stdin);

  nResult = atoi(szBuffer);
  printf("%d\n", nResult);
  return EXIT_SUCCESS;
}
/*Input string: 42*/
/*42*/
