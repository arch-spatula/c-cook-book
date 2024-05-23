#include <stdio.h>
#include <stdlib.h>

#define DECK_UNIT 104
/*
 *  INFO: S는 스페이드, H는 하트, D는 다이아몬드, C는 클러버
 */
#define CARD_SHAPE "SHDC"
/*
 *  TODO: T는 화면서 10을 표현하지만 값은 T로 표현함 UI상 T를 10으로 처리하는
 *  것이 내부 셔플을 처리하는 것보다 쉬움
 */
#define CARD_VALUE "A23456789TJQK"

enum SESSION { HOUSE_BROKE, PLAYER_BROKE, END_GAME, PLAYING };

enum SESSION beforeRoundStart(int *rounds, int playerMoney, int dealerMoney);

int exitSession(enum SESSION, int rounds, int playerMoney, int playerWins,
                int dealerMoney, int dealerWins);

/*
 * 21에 딜러보다 더 가까이 만들면 이기는 게임
 * https://namu.wiki/w/%EB%B8%94%EB%9E%99%EC%9E%AD(%EC%B9%B4%EB%93%9C%EA%B2%8C%EC%9E%84)
 * 1 덱으로 플레이(프로토타입)
 * - Blackjack
 *   - A랑 JQK로 21 만들면 1.5배 배당
 *
 * 컴퓨터가 딜러
 * - 딜러는 8, 8이 나오더라도 스플릿 할 권한 없이 16으로 게임을 진행
 * - 딜러 블랙잭을 우선 순위로 모든 플레이어 (승리/패배)
 * - 딜러가 소프트 17에서 히트
 *   - 16 이하면 무조건 히트, 17 이상이면 무조건 스테이
 * - 버스트가 아니면 A는 11로 간주
 * - 딜러의 숫자 합이 블랙잭이 아닌 일반 21일 경우 무승부로 인정되어 베팅반환
 * - 딜러는 패 공개
 *
 * 플레이어는 사용자
 * - 플레이어가 버스트 되면 딜러가 무조건 이긴다
 * - 서렌더 허용
 *   - 플레이어가 게임을 포기하고, 베팅액의 절반을 돌려 받는 규칙
 * - AA 스플릿 후 또 A가 나왔을 시 다시 스플릿 허용
 * - 더블다운
 *   - 합이 21이 넘지 않는 한 무제한으로 뽑을 수 있는 카드를 이후 단 하나만 더
 * 받는 조건으로 돈을 두 배
 *   - 모든 경우 허용
 * - A유리한쪽으로 선택
 * - 인슈어런스
 *   - 딜러의 오픈된 카드가 스페이드 A일 경우, 딜러가 블랙잭이 나올 가능성에
 * 대비해 보험
 *   - 딜러가 블랙잭일 경우 딜러는 보험금의 4배를 보험수당으로 지불
 *   - 건 금액의 절반이 보험금으로 지불
 * - Five card Charlie
 *   - 플레이어 패가 5장 이되고 딜러가 블랙잭이 아니면 플레이어 승리
 *   - 딜러 5장에 블랙잭이 아니면 플레이어 승리
 * - 플레이어가 777로 블랙 잭하면 배당 7배
 * - 원아이드잭
 *   - 스페이드J 와 하트J이 같은 무늬의 A 가 조합된 블랙잭시 배당 2배
 * - Stay 카드 뽑기 넘기기
 * - 스플릿
 *   - 처음 받은 2장의 카드가 같은 숫자일 경우, 패를 두 개로 나누어 게임을
 * 동시에 두 번
 *   - 이후 또 똑같은 숫자가 나오면 계속해서 스플릿해서 진행 가능
 *   - 본인 재산만큼 베팅 가능
 * - Even Money
 *   - 플레이어가 블랙잭이 나오고, 딜러의 보여진 패가 스페이드 A인 경우 선택
 * 발동
 *   - 플레이어는 1배 보상을 받고 게임 종료 혹은 3배 보상으로 게임 지속
 *   - 게임 시작 시점에 인슈어런스 적용시 push 효과 적용 무승부로 게임 종료
 */
int main(void) {
  // TODO: 구조체로 리팩토링
  int playerMoney = 1000, playerWins = 0, dealerMoney = 1000000, dealerWins = 0,
      rounds = 0;
  enum SESSION session = PLAYING;
  int i = 0;
  // TODO: 덱 구현
  // (2 ~ 10, J, Q, K, A) * (S, H, D, C) -> 13 * 4 = 52개 조합
  // 카드 1장 당 갖고 있어야 할 공간은 2바이트 CA 52장의 카드를 바이트단위로
  // 갖고 있기 위해서는 104바이트가 필요함
  char deck[DECK_UNIT] = {0};
  // 2개의 반복문
	// 셔플로 2개 자리 교환 시 2바이트 단위로 이동

  // NOTE: 게임 시작 출력
  printf("Jack Black Black Jack\n\n");
  // TODO: 중요!!!!! 잭 블랙 아스키 아트 추가
  printf(
      "게임을 시작합니다. 도박사 닝겐 재산은 %d원입니다. 호구카지노 콤퓨타의 "
      "재산은 %d원입니다.\n\n",
      playerMoney, dealerMoney);

  // NOTE: 판(round) 루프
  while (session == PLAYING) {
    session = beforeRoundStart(&rounds, playerMoney, dealerMoney);
    printf("%d 판\n", rounds);
    // TODO: 베팅
    // TODO: 범위 설정(전재산 최소 10%)
    printf("베팅액을 정해주세요. 최대 %d 원까지 가능합니다.\n", playerMoney);
    // TODO: 범위 초과하면 다시 입력
    // TODO: 이상한 입력도 시 입력
    // TODO: 덱 셔플

    // TODO: start 2장 뽑기
    // TODO: 승부 판단
    // TODO: Hit
    // TODO: Stay
    // TODO: 배당
  }

  int exitStatus = -1;
  exitStatus = exitSession(session, rounds, playerMoney, playerWins,
                           dealerMoney, dealerWins);
  if (exitStatus == EXIT_SUCCESS) {
    return EXIT_SUCCESS;
  } else {
    return EXIT_FAILURE;
  }
}

enum SESSION beforeRoundStart(int *rounds, int playerMoney, int dealerMoney) {
  if (playerMoney == 0) {
    return PLAYER_BROKE;
  }
  if (dealerMoney == 0) {
    return HOUSE_BROKE;
  }

  char choice = '\0';
  int waitChoice = 1;
  printf("\n[p] 게임하기(play) \n[e] 게임중단(end)\n\n\n");
  while (waitChoice) {

    waitChoice = 0;
    printf("입력: ");
    choice = getchar();
    // NOTE: 표준 입력 이후 즉시 버퍼 비우기
    while (getchar() != '\n') {
      continue;
    }
    if (choice == 'p' || choice == 'P') {
      *rounds += 1;
      return PLAYING;
    } else if (choice == 'e' || choice == 'E') {
      return END_GAME;
    } else {
      printf("잘못된 입력입니다.\n");
      waitChoice = 1;
    }
  }

  return END_GAME;
}

int exitSession(enum SESSION session, int rounds, int playerMoney,
                int playerWins, int dealerMoney, int dealerWins) {
  // NOTE: 메뉴 선택에 따라 출력
  switch (session) {
  case HOUSE_BROKE:
    /*printf("Winner winner chicken dinner\n");*/
    printf("당신은 호구카지노를 털어먹었습니다. 닝겐 승리!!\n");
    return EXIT_SUCCESS;
  case PLAYER_BROKE:
    /*printf("Loser, loser reddit user\n");*/
    printf("당신은 호구카지노 당했습니다. 콤퓨타 승리!!\n");
    return EXIT_SUCCESS;
  case END_GAME:
    printf("[%d]판 닝겐: %d원 [%d]승, 콤퓨타 %d원 [%d]승\n", rounds,
           playerMoney, playerWins, dealerMoney, dealerWins);
    return EXIT_SUCCESS;
  case PLAYING:
    puts("ERROR: PLAYING이 될 수 없습니다.");
    return EXIT_FAILURE;
  default:
    puts("ERROR: 알 수 없는 에러입니다.");
    return EXIT_FAILURE;
  }
}
