#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char ch = 0;

  while ((ch = getchar()) != '\n') {
    int nIndex = 0;

    printf("%02d\t%c\n", nIndex, ch);
    ++nIndex;
  }

  return EXIT_SUCCESS;
}
/*Hello*/
/*00	H*/
/*00	e*/
/*00	l*/
/*00	l*/
/*00	o*/
