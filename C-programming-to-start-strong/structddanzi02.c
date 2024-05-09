#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA {
  int nAge;
  char szName[32];
  char szPhone[32];
} USERDATA;

int main(void) {
  USERDATA *pUser = NULL;
  pUser = (USERDATA *)malloc(sizeof(USERDATA));

  pUser->nAge = 10;
  strcpy(pUser->szName, "Hoon");
  strcpy(pUser->szPhone, "9876");

  printf("%d살\t%s\t%s\n", pUser->nAge, pUser->szName, pUser->szPhone);
  free(pUser);

  return EXIT_SUCCESS;
}
/*10살	Hoon	9876*/
