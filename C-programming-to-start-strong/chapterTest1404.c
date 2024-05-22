#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 4KB */
#define UNIT_SIZE 4096

/*
 * `main` 함수의 인자로 두 바이너리 파일의 경로를 입력받아 바이너리 모드로
 * 열고, 원본 파일의 내용을 읽어들여 대상 파일로 복사하는 프로그램을 작성하세요.
 * 단 복사의 진행 과정을 백분율로 화면에 출력하고 한 번에 `4KB` 단위로
 * 복사합니다. 그리고 대상 파일이 존재 유무에 상관없이 무조건 생성하며, 파일의
 * 크기가 최대 `100MB` 이상인 경우는 고려하지 않습니다.
 */
int main(int argc, char *argv[]) {
  FILE *rp = NULL, *wp = NULL;
  char buffer[UNIT_SIZE] = {0};
  size_t bytesRead, totalBytesRead = 0;
  /*int startAdd = 0, endAdd = 0;*/
  long fileSize;
  if (argc != 3) {
    printf("현재 %d개의 파일 주소를 입력했습니다. 2개의 파이너리 파일 주소를 "
           "입력해주세요.\n",
           argc);
    printf(argv[0], argv[1], argv[2]);
    return EXIT_FAILURE;
  }

  rp = fopen(argv[1], "rb");
  wp = fopen(argv[2], "wb");
  if (rp == NULL || wp == NULL) {
    printf("ERROR: Failed to open file!");
    return EXIT_FAILURE;
  }

  fseek(rp, 0, SEEK_END);
  fileSize = ftell(rp);
  fseek(rp, 0, SEEK_SET);

  // 파일 복사
  while ((bytesRead = fread(buffer, 1, UNIT_SIZE, rp)) > 0) {
    fwrite(buffer, 1, bytesRead, wp);
    totalBytesRead += bytesRead;
    printf("\r%.2f%%", (double)totalBytesRead / fileSize * 100);
  }
  /*while (fgets(szCopy, sizeof(szCopy), rp)) {*/
  /*printf("%.2f%%\n",*/
  /*(double)(((unsigned char *)&szCopy - rp->_p) / endAdd * 100));*/
  /*fputs(szCopy, wp);*/
  /*memset(szCopy, 0, sizeof(szCopy));*/
  /*}*/
  fclose(rp);
  fclose(wp);
  return EXIT_SUCCESS;
}
