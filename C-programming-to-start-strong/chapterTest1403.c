#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUF_SIZE 512

int main(void) {
  FILE *rp = NULL;
  FILE *wp = NULL;
  char szDiskBuffer[MAX_BUF_SIZE] = {0};
  char START_FILE[16] = {"Test.txt"};
  char TARGET_FILE[16] = {"DstFile.txt"};

  rp = fopen(START_FILE, "r");
  wp = fopen(TARGET_FILE, "w");
  if (rp == NULL || wp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }

  printf("복사할 파일의 내용입니다.\n");
  while (fgets(szDiskBuffer, sizeof(szDiskBuffer), rp)) {
    printf("%s", szDiskBuffer);
    fputs(szDiskBuffer, wp);
    memset(szDiskBuffer, 0, sizeof(szDiskBuffer));
  }

  fclose(rp);
  fclose(wp);

  printf("복사한 파일의 내용입니다.\n");
  rp = fopen(TARGET_FILE, "r");
  if (rp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }
  while (fgets(szDiskBuffer, sizeof(szDiskBuffer), rp)) {
    printf("%s", szDiskBuffer);
    memset(szDiskBuffer, 0, sizeof(szDiskBuffer));
  }
  fclose(rp);

  return EXIT_SUCCESS;
}
