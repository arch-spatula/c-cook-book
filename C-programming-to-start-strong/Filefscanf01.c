#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nData = 0;
  char szBuffer[128] = {0};
  FILE *fp = NULL;
  fp = fopen("fscanfTest.txt", "w");
  fprintf(fp, "%d,%s\n", 20, "Test");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  fclose(fp);

  fp = fopen("fscanfTest.txt", "r");
  fscanf(fp, "%d,%s\n", &nData, szBuffer);
  fclose(fp);

  printf("%d, %s\n", nData, szBuffer);
  return EXIT_SUCCESS;
}
/*20, Test*/
