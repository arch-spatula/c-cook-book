#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nData = 10;

  printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
  printf("%d, %d\n", sizeof('A'), sizeof(char));
  printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));

  printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData));
  printf("%d\n", nData);

  return EXIT_SUCCESS;
}
/*4, 4, 4*/
/*4, 1*/
/*4, 8*/
/*4, 4*/
/*10*/
