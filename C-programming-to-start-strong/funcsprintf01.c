#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szPath[128] = {0};
  char szBuffer[128] = {0};
  printf("input path: ");
  fgets(szBuffer, sizeof(szBuffer), stdin);
  sprintf(szPath, "C:\\Program File\\%s", szBuffer);
  puts(szPath);
  return EXIT_SUCCESS;
}
