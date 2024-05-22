#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = stdin;
  printf("Input string: ");

  printf("getchar( ) - %c\n", getchar());

	// 버퍼에 남은 문자열 정보를 window용으로 출력
	/*printf("[%d] %s", fp ->_cnt, fp->_base);*/
	/*printf("Read: %d\n", fp ->_ptr - fp->_base);*/

	printf("\n\ngetchar( ) - %c\n", getchar());
	/*printf("[%d] %s", fp ->_cnt, fp->_base);*/
	/*printf("Read: %d\n", fp ->_ptr - fp->_base);*/

	fflush(fp);
	/*printf("\n\nAfter flushing\n[%d] %s", fp->_cnt, fp->_base);*/
	/*printf("Read: %d\n", fp ->_ptr - fp->_base);*/

  return EXIT_SUCCESS;
}
