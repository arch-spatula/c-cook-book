#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fp = NULL;
  fp = fopen("Test.dat", "rb");

  fseek(fp, 0, SEEK_END);

  printf("size of Test.dat : %lu\n", ftell(fp));
  fclose(fp);
  return EXIT_SUCCESS;
}
/*size of Test.dat : 32*/
