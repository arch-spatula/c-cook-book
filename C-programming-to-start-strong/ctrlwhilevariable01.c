#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char ch = 0;
  int nIndex = 0;
  while ((ch = getchar()) != '\n') {
    printf("%02d\t%c\n", nIndex, ch);
    ++nIndex;
  }
  return EXIT_SUCCESS;
}
/*Hello*/
/*00	H*/
/*01	e*/
/*02	l*/
/*03	l*/
/*04	o*/
