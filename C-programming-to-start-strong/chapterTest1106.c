#include <malloc/malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_UNIT 16 * sizeof(char)

/*
 * 사용자로부터 입력받은 첫 번째 문자열을 동적 할당된 메모리에 저장한 후 화면에
 * 출력하고, 두 번째로 입력 받은 문자열을 첫 번째로 동적 할당된 메모리에 덧붙여
 * 출력하는 프로그램을 작성합니다. 이때, 메모리가 부족해서 문제가 발생하지
 * 않도록 메모리의 크기를 조정합니다. 기존에 할당받은 메모리의 크기를 늘려도
 * 좋고 다시 할당받아도 좋습니다. 혹은 두 경우를 모두 구현하는 것도 좋습니다.
 */
int main(void) {
  printf("%ld글자 이하로 입력하세요. : ", BUF_UNIT);
  char *firstInput = NULL;
  firstInput = (char *)malloc(BUF_UNIT);             // 힙에 저장
  fgets(firstInput, malloc_size(firstInput), stdin); // 사용자로부터 입력
  puts(firstInput);

  // 개행문자 제거
  firstInput[strlen(firstInput)-1] = 0;

  printf("%ld글자 이하로 입력하세요. : ", BUF_UNIT);
  char *secondInput = NULL;
  secondInput = (char *)malloc(BUF_UNIT);              // 힙에 저장
  fgets(secondInput, malloc_size(secondInput), stdin); // 사용자로부터 입력

  if (strlen(firstInput) + strlen(secondInput) + 1 >= BUF_UNIT) {
    printf("메모리 확장\n");
    firstInput = (char *)realloc(firstInput, BUF_UNIT * 2); // 공간 확장
    if (firstInput == NULL) {
      free(firstInput);
      free(secondInput);
      return EXIT_FAILURE;
    }
  }

  strcat(firstInput, secondInput);
  printf("붙인 문자열: %s\n", firstInput);

  free(firstInput);
  free(secondInput);
  return EXIT_SUCCESS;
}
