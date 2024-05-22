#include <stdio.h>
#include <stdlib.h>

typedef const char *LPSTR;

int main(void) {
  LPSTR pszData = NULL;
  pszData = "HelloWorld";
  printf("%s\n", pszData);

  return EXIT_SUCCESS;
}
/*HelloWorld*/
