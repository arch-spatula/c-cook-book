#include <stdio.h>
#include <stdlib.h>

int main(void) {
  for (int i = 1; i <= 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      if (5 - i > j)
        printf("\t");
      else
        printf("*\t\t");
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
