#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nInput = 0;

  do {
    printf("Input number : ");
    scanf("%d", &nInput);
  } while (nInput < 0 || nInput > 10);

  puts("End");
  return EXIT_SUCCESS;
}
