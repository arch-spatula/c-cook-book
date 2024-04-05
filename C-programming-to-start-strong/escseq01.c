#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 10;

  /* 문자상수를 화면에 출력 */
  putchar('B');

  /* '\n'은 개행문자이므로 알파벳 문자가 화면에 보이지 않을 것 */
  putchar('\n');

  /* 개행 문자 출력 이후 A와 개행문제를 출력 */
  printf("%c\n", 'A');

  /* %d라는 형식 문자에 맞춰 변수 x에 담긴 정보 출력 */
  printf("x는 %d 입니다.\n", x);

  return EXIT_SUCCESS;
}
