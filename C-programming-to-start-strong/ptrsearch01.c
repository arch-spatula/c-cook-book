#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char szBuffer[32] = {"I am a boy."};
  printf("%p\n", (void *)(szBuffer));

  printf("%p\n", (void *)(strstr(szBuffer, "am")));
  printf("%p\n", (void *)(strstr(szBuffer, "boy")));

  printf("index : %ld\n", strstr(szBuffer, "am") - szBuffer);
  printf("index : %ld\n", strstr(szBuffer, "boy") - szBuffer);
  return EXIT_SUCCESS;
}
/*0x16d5030b0*/
/*0x16d5030b2*/
/*0x16d5030b7*/
/*index : 2*/
/*index : 7*/
