#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA {
  int nAge;
  char szName[32];
  char szPhone[32];
} USERDATA;

USERDATA GetUser(void) {
  USERDATA user = {0};

  scanf("%d%*c", &user.nAge);
  fgets(user.szName, sizeof(user.szName), stdin);
  fgets(user.szPhone, sizeof(user.szPhone), stdin);

  return user;
}

int main(void) {
  USERDATA user = GetUser();

  printf("%d살\t%s\t%s\n", user.nAge, user.szName, user.szPhone);
  return EXIT_SUCCESS;
}
