#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char szCommand[512] = {0};
  printf("Input command: ");

  fgets(szCommand, 512, stdin);
  system(szCommand);

  return EXIT_SUCCESS;
}
/*Input command: pwd*/
