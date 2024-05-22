#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 0;
  for (i = 0; i < 10; ++i) {
    if (i > 4)
      break;

    printf("%dth\n", i);
  }

  printf("END: i == %d\n", i);
  return EXIT_SUCCESS;
}
/*0th*/
/*1th*/
/*2th*/
/*3th*/
/*4th*/
/*END: i == 5*/
