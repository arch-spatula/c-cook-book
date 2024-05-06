#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  struct tm *ptime = {0};
  time_t t = 0;

  t = time(NULL);
  ptime = localtime(&t);

  printf("%ld\n", t);
  printf("%s", ctime(&t));

  printf("%04d-%02d-%02d\n", ptime->tm_year + 1900, ptime->tm_mon + 1,
         ptime->tm_mday);

  return EXIT_SUCCESS;
}
/*1714919364*/
/*Sun May  5 23:29:24 2024*/
/*2024-05-05*/
