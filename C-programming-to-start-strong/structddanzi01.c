#include <stdio.h>
#include <stdlib.h>

typedef struct USERDATA {
  int nAge;
  char szName[32];
  char szPhone[32];
} USERDATA;

int main(void) {

  USERDATA userdata[4] = {
      {10, "foo", "1234"},
      {11, "bar", "2345"},
      {17, "baz", "3456"},
      {12, "qux", "4567"},
  };
  int i = 0;

  for (i = 0; i < 4; ++i) {
    printf("%d살\t%s\t%s\n", userdata[i].nAge, userdata[i].szName,
           userdata[i].szPhone);
  }

  return EXIT_SUCCESS;
}
/*10살	foo	1234*/
/*11살	bar	2345*/
/*17살	baz	3456*/
/*12살	qux	4567*/
