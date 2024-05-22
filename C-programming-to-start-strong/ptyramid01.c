#include <stdio.h>
#include <stdlib.h>

int main(void) {
  for (int i = 0; i < 5; ++i) {

    for (int j = 0; j < 5 + i; ++j) {
      if (i + j >= 4)
        printf("*\t");
      else
        putchar('\t');
    }
    putchar('\n');
  }

  return EXIT_SUCCESS;
}
