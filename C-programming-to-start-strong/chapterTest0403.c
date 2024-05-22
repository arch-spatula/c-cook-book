#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nInput = 0, nTotal = 0;

  scanf("%d", &nInput);
  nTotal += nInput;

  scanf("%d", &nInput);
  nTotal += nInput;

  scanf("%d", &nInput);
  nTotal += nInput;

  printf("Total :%d\n", nTotal);

  return EXIT_SUCCESS;
}
/*1*/
/*2*/
/*3*/
/*Total :6*/
