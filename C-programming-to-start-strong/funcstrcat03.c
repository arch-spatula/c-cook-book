#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char szPath[128] = {"C:\\Program File\\"};

  strncat(szPath + 17, "CHS\\", sizeof(char) * 128);
  strncat(szPath + 17 + 8, "C programming", sizeof(char) * 128);
  puts(szPath);

  return EXIT_SUCCESS;
}
