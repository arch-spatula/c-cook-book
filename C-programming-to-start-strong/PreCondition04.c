#include <stdio.h>
#include <stdlib.h>

#ifndef _DEBUG
#define MODEMESSAGE "Debug mode"
#else
#define MODEMESSAGE "Release mode"
#endif

int main(void) {
  puts(MODEMESSAGE);
  return EXIT_SUCCESS;
}
