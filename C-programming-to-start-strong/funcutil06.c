#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char ch;
  printf("Do you want to Exit? (Y/N)\n");
  ch = getchar();

  if (ch == 'y' || ch == 'Y') {

    puts("Exit");
    exit(1);
  }

  puts("End of main()");
  return EXIT_SUCCESS;
}
/*Do you want to Exit? (Y/N)*/
/*y*/
/*Exit*/
