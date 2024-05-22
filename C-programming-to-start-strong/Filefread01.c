#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA {
  char szName[16];
  char szPhone[16];
} USERDATA;

int main(void) {
  FILE *fp = NULL;
  USERDATA UserData = {0};

  fp = fopen("Test.dat", "rb");
  if (fp == NULL)
    return EXIT_FAILURE;

  fread(&UserData, sizeof(USERDATA), 1, fp);
  puts(UserData.szName);
  puts(UserData.szPhone);
  fclose(fp);
  return EXIT_SUCCESS;
}
/*Ho-sung*/
/*123-1234*/
