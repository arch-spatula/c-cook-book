#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA {
  char szName[32];
  char szPhone[32];
  struct USERDATA *pNext;
} USERDATA;

int main(void) {
  USERDATA user = {"foo", "1234", NULL};
  USERDATA newUser = {"bar", "2345", NULL};

  user.pNext = &newUser;

  printf("%s\t%s\n", user.szName, user.szPhone);
  printf("%s\t%s\n", user.pNext->szName, user.pNext->szPhone);

  return EXIT_SUCCESS;
}
/*foo	1234*/
/*bar	2345*/
