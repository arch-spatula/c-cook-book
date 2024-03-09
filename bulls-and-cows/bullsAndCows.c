#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  /* 게임시작 */
  printf("숫자야구를 시작합니다!\n");
  /* 숫자 3개를 랜덤으로 1 ~ 9 중 중복 없이 순서에 따라 선택 */
  srand(time(NULL));
  int first = rand() % 10, second = rand() % 10, third = rand() % 10;
  while (first == 0 || first == second || first == third) {
    first = rand() % 10;
  }
  while (second == 0 || second == first || second == third) {
    second = rand() % 10;
  }
  while (third == 0 || third == second || third == first) {
    third = rand() % 10;
  }

  /* 게임루프 */
  int i = 1;
  while (i < 10) {
    printf("%d회\n", i);

    /* 표준입력을 받음 */
    int playerFrist, playerSecond, playThird;
    int isNum = scanf("%d %d %d", &playerFrist, &playerSecond, &playThird);

    /* 타입확인 */
    if (isNum != 3) {
      printf("숫자로 입력해주세요\n");
      /* 버퍼 비우기 */
      while (getchar() != '\n') {
        continue;
      }
      continue;
    }

    /* 1 ~ 9 사이 숫자인지 확인 */
    if (1 > playerFrist || playerFrist > 9 || 1 > playerSecond ||
        playerSecond > 9 || 1 > playThird && playThird > 9) {
      printf("모든 숫자를 1 ~ 9 사이 숫자로 입력해주세요\n");
      continue;
    }

    /* 중복 확인 */
    if (playerFrist == playerSecond || playerSecond == playThird ||
        playerFrist == playThird) {
      printf("중복하지 않는 숫자로 입력해주세요\n");
      continue;
    }

    /* 입력을 판정 */
    int ball = 0, strike = 0;
    /* 아웃, 볼, 스라이크 */
    if (playerFrist == first) {
      strike += 1;
    }
    if (playerFrist == second || playerFrist == third) {
      ball += 1;
    }
    if (playerSecond == second) {
      strike += 1;
    }
    if (playerSecond == first || playerSecond == third) {
      ball += 1;
    }
    if (playThird == third) {
      strike += 1;
    }
    if (playThird == first || playThird == second) {
      ball += 1;
    }
    /* 결과를 누적 */
    /* 결과를 출력 */
    printf("strike %d ball: %d\n", strike, ball);
    if (first == playerFrist && second == playerSecond && third == playThird) {
      printf("닝겐 승리!\n");
      return 0;
    } else {
      i += 1;
    }
  }

  /* 게임종료 */
  printf("%d %d %d\n", first, second, third);
  printf("콤퓨타 승리!\n");
  return 0;
}
