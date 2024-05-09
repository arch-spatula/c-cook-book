#include <stdio.h>
#include <stdlib.h>

typedef struct MYBODY {
  int nHeight;
  int nWeight;
} MYBODY;

typedef struct USERDATA {
  char szName[32];
  char szPhone[32];
  MYBODY body;
} USERDATA;

int main(void) {
  USERDATA user = {"Hoon", "1234", {175, 70}};
  printf("%s\t%s\t%d\t%d\n", user.szName, user.szPhone, user.body.nHeight,
         user.body.nWeight);
  return EXIT_SUCCESS;
}
/*Hoon	1234	175	70*/
