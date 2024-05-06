#include <stdio.h>
#include <stdlib.h>

void swap(int *pLeft, int *pRight) {
  int temp = *pLeft;
  *pLeft = *pRight;
  *pRight = temp;
}

int main(void) {
  int x = 10, y = 20;
  printf("x : %d, y : %d\n", x, y);
  swap(&x, &y);
  printf("x : %d, y : %d\n", x, y);
  return EXIT_SUCCESS;
}
/*x : 10, y : 20*/
/*x : 20, y : 10*/
