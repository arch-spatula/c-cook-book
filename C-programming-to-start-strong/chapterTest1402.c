#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUF_SIZE 512

int main(void) {
  FILE *fp = NULL;
  char szStdioBuffer[MAX_BUF_SIZE] = {0};
  char szDiskBuffer[MAX_BUF_SIZE] = {0};
  char TARGET_FILE[16] = {"Test.txt"};

  fp = fopen(TARGET_FILE, "r");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  printf("저장 전 파일 내용입니다.\n");
  while (fgets(szDiskBuffer, sizeof(szDiskBuffer), fp)) {
    printf("%s", szDiskBuffer);
    memset(szDiskBuffer, 0, sizeof(szDiskBuffer));
  }
  fclose(fp);

  fp = fopen(TARGET_FILE, "a");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  printf("이런저런 입력하세요: ");
  fgets(szStdioBuffer, sizeof(szStdioBuffer), stdin);
  fputs(szStdioBuffer, fp);
  fclose(fp);

  fp = fopen(TARGET_FILE, "r");
  if (fp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  printf("저장 후 파일 내용입니다.\n");
  while (fgets(szDiskBuffer, sizeof(szDiskBuffer), fp)) {
    printf("%s", szDiskBuffer);
    memset(szDiskBuffer, 0, sizeof(szDiskBuffer));
  }
  fclose(fp);
  return EXIT_SUCCESS;
}
