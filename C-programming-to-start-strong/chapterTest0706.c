#include <stdio.h>
#include <stdlib.h>

int main(void) {
  for (int i = 1; i <= 5; ++i) {
    for (int j = 0; j < i; ++j) {
      printf("*\t");
    }
    putchar('\n');
  }

  return EXIT_SUCCESS;
}
/**	*/
/**	*	*/
/**	*	*	*/
/**	*	*	*	*/
/**	*	*	*	*	*/
