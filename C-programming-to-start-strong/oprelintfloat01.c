#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("%d\n", 300 == 299.99999F);
  printf("%d\n", 300 == 299.99999);
  printf("%d\n", 300 == 299.9999);
  printf("%d\n", 300 == 300.00001F);
  return EXIT_SUCCESS;
}
/*1*/
/*0*/
/*0*/
/*1*/
