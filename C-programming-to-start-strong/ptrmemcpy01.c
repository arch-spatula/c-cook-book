#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char szBuffer[12] = {"HelloWorld"};
  char szNewBuffer[12] = {0};

  memcpy(szNewBuffer, szBuffer, 4);
  puts(szNewBuffer);

  memcpy(szNewBuffer, szBuffer, 6);
  puts(szNewBuffer);

  memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
  puts(szNewBuffer);

  return EXIT_SUCCESS;
}
/*Hell*/
/*HelloW*/
/*HelloWorld*/
