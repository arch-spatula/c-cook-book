#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = NULL;

  fp = fopen("Text.txt", "w");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }

  fclose(fp);
  return EXIT_SUCCESS;
}
