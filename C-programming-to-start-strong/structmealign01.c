#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA {
  char ch;
  int nAge;
} USERDATA;

typedef struct MYDATA {
  char ch;
  int nAge;
  double dData;
} MYDATA;

int main(void) {
  printf("%ld\n", sizeof(USERDATA));
  printf("%ld\n", sizeof(MYDATA));

  return EXIT_SUCCESS;
}
/*8*/
/*16*/
