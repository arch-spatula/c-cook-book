#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 비교 함수
int CompareStrings(const void *a, const void *b) {
  // 두 문자열을 가나다 순서로 비교
  return strcmp(*(const char **)a, *(const char **)b);
}

void SortString(char *aList[], int idx) {
  // qsort 함수를 사용하여 문자열 배열을 정렬
  qsort(aList, idx, sizeof(char *), CompareStrings);
}

int main(void) {
  char *aList[5] = {
      "정형돈", "노홍철", "하하", "유재석", "박명수",
  };
  int i = 0;
  SortString(aList, 5);

  for (i = 0; i < 5; ++i) {
    puts(aList[i]);
  }

  return EXIT_SUCCESS;
}
/*노홍철*/
/*박명수*/
/*유재석*/
/*정형돈*/
/*하하*/
