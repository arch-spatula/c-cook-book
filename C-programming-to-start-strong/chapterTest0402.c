#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int sec = 0;
  scanf("%d", &sec);
  printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", sec, sec / (60 * 60),
         sec % (60 * 60) / 60, sec % 60);
  return EXIT_SUCCESS;
}
/*4000*/
/*4000초는 01시간 06분 40초 입니다.*/
