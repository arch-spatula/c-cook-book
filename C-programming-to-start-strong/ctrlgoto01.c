#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nInput;

INPUT:
  printf("Input number : ");
  scanf("%d", &nInput);

  if (nInput < 0 || nInput > 10)
    goto INPUT;

  puts("End");

  return EXIT_SUCCESS;
}
/*Input number : -1*/
/*Input number : 11*/
/*Input number : 5*/
/*End*/
