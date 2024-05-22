#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nMax = 0;
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  a > b ? (nMax = a) : (b > c ? (nMax = b) : (nMax = c));

  printf("MAX: %d\n", nMax);
  return EXIT_SUCCESS;
}
