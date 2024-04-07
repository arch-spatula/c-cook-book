#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x = 5, y = 10;

  printf("%d\n", x == y);
  printf("%d\n", x != y);
  printf("%d\n", x > y);
  printf("%d\n", x < y);

  printf("%d\n", y >= 10);
  printf("%d\n", y <= x + 5);

  return EXIT_SUCCESS;
}
/*0*/
/*1*/
/*0*/
/*1*/
/*1*/
/*1*/
