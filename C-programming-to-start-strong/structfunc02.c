#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA {
  int nAge;
  char szName[32];
  char szPhone[32];
} USERDATA;

void GetUser(USERDATA *user) {
  scanf("%d%*c", &user->nAge);
  fgets(user->szName, sizeof(user->szName), stdin);
  fgets(user->szPhone, sizeof(user->szPhone), stdin);
}

int main(void) {
  USERDATA user = {0};
  GetUser(&user);
  printf("%d살\t%s\t%s\n", user.nAge, user.szName, user.szPhone);
  return EXIT_SUCCESS;
}
