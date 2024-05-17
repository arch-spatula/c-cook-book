#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = NULL;
  char ch;

  fp = fopen("Test.txt", "w");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  fputs("Test string!", fp);
  fclose(fp);

  fp = fopen("Test.txt", "r");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }

  while ((ch = fgetc(fp)) != EOF) {
    putchar(ch);
  }
  fclose(fp);

  return EXIT_SUCCESS;
}
/*Test string!*/
