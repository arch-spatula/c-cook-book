#include <stdio.h>
#include <stdlib.h>

void GetName(char *pszName, int nSize) {
  printf("이름을 입력하세요. : ");
  fgets(pszName, nSize, stdin);
}

int main(void) {
  char szName[32] = {0};
  GetName(szName, sizeof(szName));
  printf("당신의 이름은 %s입니다.\n", szName);
  return EXIT_SUCCESS;
}
/*이름을 입력하세요. : asdf*/
/*당신의 이름은 asdf*/
/*입니다.*/
