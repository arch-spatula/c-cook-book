#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num[5] = {0};
  int i = 0, min = 0, max = 0;

  for (i = 0; i < 5; ++i) {
    scanf("%d", &num[i]);
  }

  min = num[0];
  max = num[0];

  for (i = 1; i < 5; ++i) {
    if (num[i] > max)
      max = num[i];
    if (num[i] < min)
      min = num[i];
  }

  printf("MIN: %d, MAX: %d\n", min, max);
  return EXIT_SUCCESS;
}
/*1 2 3 4 5*/
/*MIN: 1, MAX: 5*/
