#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 0, j = 0;

  while (i < 5) {
    j = 0;
    while (j < 5) {
      j += 1;
      printf("*\t");
    }
    putchar('\n');
    i += 1;
  }

  return EXIT_SUCCESS;
}
/**	*	*	*	*	*/
/**	*	*	*	*	*/
/**	*	*	*	*	*/
/**	*	*	*	*	*/
/**	*	*	*	* */
