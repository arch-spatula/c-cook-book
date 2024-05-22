#include <stdio.h>
#include <stdlib.h>

int GetMin(int a, int b, int c, int d) {
  int max = a;
  if (max < b)
    max = b;
  if (max < c)
    max = c;
  if (max < d)
    max = d;
  return max;
}

int main(void) {
  int a = 0, b = 0, c = 0, d = 0;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  printf("%d\n", GetMin(a, b, c, d));
  return EXIT_SUCCESS;
}
/*1 2 3 4*/
/*4*/
