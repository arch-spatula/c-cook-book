#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *fp = NULL;
  char szBuffer[512] = {0};
  fp = fopen("Test.txt", "w");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  fputs("Test\n", fp);
  fputs("String\n", fp);
  fputs("Data\n", fp);

  fclose(fp);

  fp = fopen("Test.txt", "r");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  while (fgets(szBuffer, sizeof(szBuffer), fp)) {
    printf("%s", szBuffer);
    memset(szBuffer, 0, sizeof(szBuffer));
  }

  fclose(fp);
  return EXIT_SUCCESS;
}
/*Test*/
/*String*/
/*Data*/
