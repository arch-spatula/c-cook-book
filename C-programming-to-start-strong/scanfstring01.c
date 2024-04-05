#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szBuffer[32] = { 0 };
  scanf("%s", szBuffer);
  printf("%s\n", szBuffer);
  return EXIT_SUCCESS;
}
