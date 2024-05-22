#include <stdio.h>
#include <stdlib.h>

#define MAXLENGTH 32

int main(void) {
  char szName[MAXLENGTH] = {0};

  printf("이름을 입력하세요: ");
  fgets(szName, sizeof(char) * MAXLENGTH, stdin);
  return EXIT_SUCCESS;
}
