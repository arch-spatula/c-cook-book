#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char szPath[128] = {"/Home/main/C-programming-to-start-strong/"};
  char szBuffer[128] = {0};
  printf("input path: ");

  fgets(szBuffer, sizeof(szBuffer), stdin);
  strncat(szPath, szBuffer, sizeof(char) * 128);
  puts(szPath);

  return EXIT_SUCCESS;
}
/*input path: foo.txt*/
/*/Home/main/C-programming-to-start-strong/foo.txt*/
