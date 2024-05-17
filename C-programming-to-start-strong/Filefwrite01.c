#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA {
  char szName[16];
  char szPhone[16];
} USERDATA;

int main(void) {
  FILE *fp = NULL;
  USERDATA UserData = {"Ho-sung", "123-1234"};

  fp = fopen("Test.dat", "wb");
  if (fp == NULL)
    return EXIT_FAILURE;

  fwrite(&UserData, sizeof(USERDATA), 1, fp);

  fclose(fp);

  return EXIT_SUCCESS;
}
