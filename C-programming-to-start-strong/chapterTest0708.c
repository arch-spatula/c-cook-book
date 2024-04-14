#include <stdio.h>
#include <stdlib.h>

int main(void) {
  for (int i = 1; i <= 5; ++i) {

    for (int j = 1; j <= 5 - i; ++j) {
      printf("\t");
    }

    for (int j = 1; j <= 2 * i - 1; ++j) {
      printf("*\t");
    }

    for (int j = 1; j <= 5 - i; ++j) {
      printf("\t");
    }

    putchar('\n');
  }

  return EXIT_SUCCESS;
}
/*
				*					
			*	*	*				
		*	*	*	*	*			
	*	*	*	*	*	*	*		
*	*	*	*	*	*	*	*	*
*/
