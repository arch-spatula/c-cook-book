#include <malloc/malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 정수를 입력받고, 그 개수만큼 `char *`를 여러 개 저장할 수 있는 메모리를 동적
 * 할당합니다. 그리고 입력할 문자열의 최대 길이를 입력받고, 최대 길이의 문자열을
 * 저장할 수 있는 크기의 메모리를 동적 할당하여 입력받은 문자열을 저장한 후
 * 출력하는 프로그램을 작성합니다.
 */
int main(void) {
  int inputNum = 0, bufSize = 0, i = 0;
  unsigned long max = 0;
  printf("비교할 문자열의 개수를 정해주세요 : ");
  scanf("%d%*c", &inputNum);
  printf("최대 문자열의 길이를 정해주세요 : ");
  scanf("%d%*c", &bufSize);
  bufSize = sizeof(char) * bufSize;

  if (inputNum <= 0 || bufSize <= 0) {
    return EXIT_FAILURE;
  }

  // 배열의 원소는 포인터
  char *(inputArray)[inputNum];

  for (i = 0; i < inputNum; ++i) {
    inputArray[i] = malloc(bufSize);
    fgets(inputArray[i], bufSize, stdin);
  }

  for (i = 0; i < inputNum; ++i) {
    printf("%s\n", inputArray[i]);
    if (strlen(inputArray[i]) > max)
      max = strlen(inputArray[i]);
    free(inputArray[i]);
  }
  printf("max: %ld\n", max);
  return EXIT_SUCCESS;
}
