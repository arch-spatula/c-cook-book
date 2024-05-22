#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_LENGTH 100

int main(void) {
  // 생략...
  /* 표준입력을 문자열로 받음 */
  char input[MAX_INPUT_LENGTH];
  if (fgets(input, sizeof(input), stdin) == NULL) {
    printf("입력 오류\n");
    return 1;
  }

  printf("%s\n", input);
  return EXIT_SUCCESS;
}
/*foo bar baz*/
/*foo bar baz*/
