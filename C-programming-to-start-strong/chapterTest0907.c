#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5][5] = {0};
  int i = 0, j = 4, nCounter = 0, dir = 4; // dir은 방향 1 상 2 우 3 하 4 좌

  while (nCounter < 25) {
    ++nCounter;

    // 다른면을 탐색
    // 방향 분기
    switch (dir) {
    case 1:
      if (aList[i][j] == 0) {
        aList[i][j] = nCounter;
        i -= 1;
      }
      if (aList[i - 1][j] > 0) {
        dir = 4;
      }
      if (i == -1) {
        dir = 4;
        j -= 1;
        i += 1;
        break;
      }
      break;
    case 2:
      if (aList[i][j] == 0) {
        aList[i][j] = nCounter;
        j += 1;
      }
      if (aList[i][j + 1] > 0) {
        dir = 1;
      }
      if (j == 5) {
        dir = 1;
        j -= 1;
        i -= 1;
        break;
      }
      break;
    case 3:
      if (aList[i][j] == 0) {
        aList[i][j] = nCounter;
        i += 1;
      }
      if (aList[i + 1][j] > 0) {
        dir = 2;
      }
      if (i == 5) {
        dir = 2;
        j += 1;
        i -= 1;
        break;
      }
      break;
    case 4:
      if (aList[i][j] == 0) {
        aList[i][j] = nCounter;
        j -= 1;
      }
      if (aList[i][j - 1] > 0) {
        dir = 3;
      }
      if (j == -1) {
        dir = 3;
        j += 1;
        i += 1;
        break;
      }
      break;
    default:
      puts("ERROR: 알 수 없는 산술 연산입니다.");
    }
  }

  for (i = 0; i < 5; ++i) {
    for (j = 0; j < 5; ++j) {
      printf("%d\t", aList[i][j]);
    }
    putchar('\n');
  }

  return EXIT_SUCCESS;
}
