#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i = 0;
  srand((unsigned)time(NULL));

  for (i = 0; i < 10; ++i) {
    printf("%6d\n", rand());
  }

  for (i = 0; i < 10; ++i) {
    printf("%6d\n", rand() % 10);
  }

  return EXIT_SUCCESS;
}
/*1979198219*/
/*2010258350*/
/*51870199*/
/*2051557558*/
/*530441074*/
/*918512021*/
/*1319082311*/
/*1342712996*/
/*1219161096*/
/*1299064445*/
/*3*/
/*4*/
/*9*/
/*7*/
/*5*/
/*9*/
/*4*/
/*8*/
/*9*/
/*9*/
