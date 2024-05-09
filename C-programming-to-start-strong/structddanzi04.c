#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA {
  char szName[32];
  char szPhone[32];
  struct USERDATA *pNext;
} USERDATA;

int main(void) {
  USERDATA userList[4] = {
      {"foo", "1234", NULL},
      {"bar", "2345", NULL},
      {"baz", "3456", NULL},
      {"qux", "4567", NULL},
  };
  USERDATA *pUser = NULL;

  userList[0].pNext = &userList[1];
  userList[1].pNext = &userList[2];
  userList[2].pNext = &userList[3];
  userList[3].pNext = NULL;

  pUser = &userList[0];
  while (pUser != NULL) {
    printf("%s\t%s\n", pUser->szName, pUser->szPhone);
    pUser = pUser->pNext;
  }

  return EXIT_SUCCESS;
}
/*foo	1234*/
/*bar	2345*/
/*baz	3456*/
/*qux	4567*/
