#include <stdio.h>
#include <stdlib.h>

#pragma pack(push, 1)
typedef struct USERDATA {
  char ch;
  int nAge;
} USERDATA;

typedef struct MYDATA {
  char ch;
  int nAge;
  double dData;
} MYDATA;
#pragma pack(pop)

int main(void) {
  printf("%ld\n", sizeof(USERDATA));
  printf("%ld\n", sizeof(MYDATA));

  return EXIT_SUCCESS;
}
/*5*/
/*13*/
