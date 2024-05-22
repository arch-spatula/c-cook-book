#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char ch = 'A';
  printf("%c\n", ch);

  printf("%c\n", ch + 1);
  printf("%c\n", 'A' + 1);

  /*printf("%d\n", 5.0 + 2);*/
  printf("%f\n", 5.0 + 2);
  return EXIT_SUCCESS;
}
