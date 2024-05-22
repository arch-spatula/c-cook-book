#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int count = 0;
	char buf = 0;
	printf("입력 : ");
  while (buf != '\n') {
		buf = getchar();
    count += 1;
		if (count == 2) {
			printf("출력 : %c\n", buf);
		}
  }
  if (count < 4) {
    printf("4개 이하 문자를 입력했습니다.\n");
  }
  return EXIT_SUCCESS;
}
