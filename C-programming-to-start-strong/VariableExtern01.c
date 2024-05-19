#include "Test.c"
#include <stdio.h>
#include <stdlib.h>

void InitCounter(int nData);
void IncreaseCounter(void);

extern int g_nCounter;

int main(void) {
  InitCounter(10);
  printf("%d\n", g_nCounter);
  IncreaseCounter();
  printf("%d\n", g_nCounter);

  return EXIT_SUCCESS;
}
/*10*/
/*11*/
