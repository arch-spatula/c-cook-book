#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int aList[4][2][3] = {0};
  int i = 0, j = 0, k = 0, nCounter = 0;

  for (i = 0; i < 4; ++i) {
    printf("Plane number : %d\n", i);
    for (j = 0; j < 2; ++j) {
      for (k = 0; k < 3; ++k) {
        aList[i][j][k] = ++nCounter;
        printf("%d\t", aList[i][j][k]);
      }
      putchar('\n');
    }
    printf("\n\n");
  }

  return EXIT_SUCCESS;
}
/*Plane number : 0*/
/*1	2	3	*/
/*4	5	6	*/

/*Plane number : 1*/
/*7	8	9	*/
/*10	11	12	*/

/*Plane number : 2*/
/*13	14	15	*/
/*16	17	18	*/

/*Plane number : 3*/
/*19	20	21	*/
/*22	23	24	*/
