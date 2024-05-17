#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUF_SIZE 512

int main(void) {
  FILE *fp = NULL;
  char szBuffer[MAX_BUF_SIZE] = {0};

  fp = fopen("Test.txt", "w");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  printf("이런저런 입력하세요: ");
  fgets(szBuffer, sizeof(szBuffer), stdin);
  fputs(szBuffer, fp);

  memset(szBuffer, 0, sizeof(szBuffer));
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
/*이런저런 입력하세요: test string*/
/*test string*/
