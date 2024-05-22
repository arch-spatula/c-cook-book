#include <malloc/malloc.h>
#include <stdio.h>
#include <stdlib.h>

int GetLength(char *str) {
  char *startRef = str;

  while (*startRef != '\0') {
    startRef++;
  }

  return startRef - str;
}

char *MyStrrev(char *str) {
  // 처음부터 가운데까지 순회
  char temp = '\0';
  int i = 0, length = GetLength(str);
  for (i = 0; i < length / 2; ++i) {
    if (i == length - i - 1)
      break;
    // 양끝을 고르기
    // 자리를 교환
    temp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = temp;
  }

  return str;
}

int main(void) {
  char *pszData = NULL;
  pszData = (char *)malloc(sizeof(char) * 16);
  sprintf(pszData, "%s", "HelloWorld"); // 힙 할당
  puts(pszData);

  MyStrrev(pszData);
  puts(pszData);
  free(pszData);
  return EXIT_SUCCESS;
}
/*HelloWorld*/
/*dlroWolleH*/
