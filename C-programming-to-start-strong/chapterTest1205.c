#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(char *str1, char *str2, int size) {
  for (int i = 0; i < size; ++i) {
    char c1 = tolower(str1[i]);
    char c2 = tolower(str2[i]);
    if (c1 != c2) {
      return 1; // 문자열이 다르면 1 반환
    }
    if (c1 == '\0' && c2 == '\0') {
			return 0; // 둘 다 NULL 문자를 만나면 0 반환
    }
  }
  return 0; // 끝까지 순회했는데 문자열이 같으면 0 반환
}

int main(void) {
  char szBuffer[128] = {0};
  char szSet[128] = {0};

  printf("Input string: ");
  fgets(szBuffer, sizeof(szBuffer), stdin);

  printf("Input character set: ");
  fgets(szSet, sizeof(szSet), stdin);

  // 불필요한 개행 문자 제거
  szBuffer[strcspn(szBuffer, "\n")] = '\0';
  szSet[strcspn(szSet, "\n")] = '\0';

  printf("%d\n", cmp(szBuffer, szSet, 128));

  return EXIT_SUCCESS;
}
