#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char szPath[128] = {"C:\\Program File\\"};

  strncat(szPath, "CHS\\", sizeof(char) * 128);
  strncat(szPath, "C programming", sizeof(char) * 128);
  puts(szPath);

  strncpy(szPath, "C:\\Program File\\", sizeof(char) * 128);
  strncat(szPath + strlen("C:\\Program File\\"), "CHS\\", sizeof(char) * 128);
  strncat(szPath + strlen("C:\\Program File\\chs\\"), "C programming",
          sizeof(char) * 128);
  puts(szPath);

  return EXIT_SUCCESS;
}
/*C:\Program File\CHS\C programming*/
/*C:\Program File\CHS\C programming*/
