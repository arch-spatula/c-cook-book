#include <stdio.h>
#include <stdlib.h>

int PrintMenu(void) {
  int nInput = 0;

  system("clear"); // windows 운영체제는 cls
  printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
  scanf("%d", &nInput);

  return nInput;
}

int main(void) {
  int nMenu = 0;

  while ((nMenu = PrintMenu()) != 0) {
    switch (nMenu) {
    case 1:
      puts("새 항목을 추가합니다.");
      break;
    case 2:
      puts("기존 항목에서 검색합니다.");
      break;
    case 3:
      puts("전체 내용을 출력합니다.");
      break;
    case 4:
      puts("기존 항목을 삭제합니다.");
      break;
    default:
      puts("알 수 없는 명령입니다.");
      break;
    }
    getchar();
  }

  puts("Bye~~!");

  return EXIT_SUCCESS;
}
