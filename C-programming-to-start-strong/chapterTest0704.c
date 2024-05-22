#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int input = 2;
  scanf("%d%*c", &input);

  if (input < 2 || input > 9) {
    printf("Error\n");
  } else {
    for (int i = 1; i <= 9; ++i) {
      printf("%d * %d = %d\n", input, i, input * i);
    }
  }

  return EXIT_SUCCESS;
}
