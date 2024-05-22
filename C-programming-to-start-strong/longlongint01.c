#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // 부호 있는 64비트 변수 정의
  long long int lldData = 4294967295LL;

  // 64비트 정보를 32비트 문자로 출력
  printf("d\n", lldData);
  printf("u\n", lldData);

  // 32비트로 표현할 수 없는 범위의 정보 출력
  printf("%u\n", lldData + 1);
  printf("%u\n", lldData + 2);
  printf("%u\n", lldData + 3);

  // 64비트 정보를 64비트 형식 문자(%lld)로 출력
  printf("%lld\n", lldData + 1);
  printf("%lld\n", lldData + 2);
  printf("%lld\n", lldData + 3);

  return EXIT_SUCCESS;
}
