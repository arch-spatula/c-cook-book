#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 0;
  for (i = 0; i < argc; ++i) {
    puts(argv[i]);
  }

  puts("End");
  return EXIT_SUCCESS;
}
