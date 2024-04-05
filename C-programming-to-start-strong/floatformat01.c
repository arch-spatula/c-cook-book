#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double dData = 123.456;
  printf("%f, %f\n", dData, -123.456); /*123.456000, -123.456000*/

  // 소수점 반올림
  printf("%.1f\n", dData); /*123.5*/
  printf("%.2f\n", dData); /*123.46*/
  printf("%.3f\n", dData); /*123.456*/

	printf("%8d\n", dData);  // 컴파일 에러

  // 소수점을 포함해 12자리출력 소수점 4번째에서 반올림하고 3번째자리까지 출력
  printf("%12.3f\n", dData);  /*     123.456*/
  printf("%012.3f\n", dData); /*00000123.456*/

  return EXIT_SUCCESS;
}
