#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[5] = {0};
  int i = 0;

  for (i = 0; i < 5; ++i) {
    scanf("%d", &aList[i]);
  }
  for (i = 0; i < 5; ++i) {
    printf("%d\n", aList[i]);
  }

  return EXIT_SUCCESS;
}
/*1 2 3 4 5*/
/*1*/
/*2*/
/*3*/
/*4*/
/*5*/
