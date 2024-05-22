#include <stdio.h>
#include <stdlib.h>

/* 매개변수로 `char *` 타입을 받아서 문자열의 길이를 계산해 반환하는 함수를
 * 작성하세요. 함수의 이름은 `GetLength()`입니다. */

int GetLength(char *str) {
  char *startRef = str;

  while (*startRef != '\0') {
    startRef++;
  }

  return startRef - str;
}

int main(void) {
  char szBuffer[16] = {"Hello"};

  printf("%d\n", GetLength(szBuffer));

  return EXIT_SUCCESS;
}
/*5*/
