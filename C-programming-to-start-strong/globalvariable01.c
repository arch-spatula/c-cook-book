#include <stdio.h>
#include <stdlib.h>

int g_nCounter = 0;

void InitCounter(int nData) { g_nCounter = nData; }

void IncreaseCounter(void) { ++g_nCounter; }

int main(void) {
  InitCounter(10);
  printf("%d\n", g_nCounter);
  IncreaseCounter();
  printf("%d\n", g_nCounter);
  IncreaseCounter();
  printf("%d\n", g_nCounter);

  return EXIT_SUCCESS;
}
/*10*/
/*11*/
/*12*/
