#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct USERDATA {
  int nAge;
  char szName[32];
  char szPhone[32];
};

int main(void) {
  struct USERDATA user = {0, "", ""};
  user.nAge = 10;
  strcpy(user.szName, "Hoon");
  strcpy(user.szPhone, "010-1234-5678");

  printf("%d살, %s, %s\n", user.nAge, user.szName, user.szPhone);

  return EXIT_SUCCESS;
}
/*10살, Hoon, 010-1234-5678*/
