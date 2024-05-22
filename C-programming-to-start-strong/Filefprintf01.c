#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = NULL;
  fp = fopen("Test.txt", "w");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  fprintf(fp, "%s\n", "Test string");
  fprintf(fp, "%s\n", "Hello world!");

  fclose(fp);

  return EXIT_SUCCESS;
}
