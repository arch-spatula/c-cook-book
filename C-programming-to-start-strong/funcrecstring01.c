#include <stdio.h>
#include <stdlib.h>

void putData(char *str) {
  if (*str == '\0')
    return;
  putchar(*str);
  putData(str + 1);
}
int main(void) {
  putData("TestData");
  putchar('\n');

  return EXIT_SUCCESS;
}
/*TestData*/
