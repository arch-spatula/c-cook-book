#include <stdio.h>
#include <stdlib.h>

int GetTotal(int arr[][4], int row, int col) {
  int result = 0, i = 0, j = 0;
  for (i = 0; i < row; ++i) {
    for (j = 0; j < col; ++j) {
      result += arr[i][j];
    }
  }

  return result;
}

int main(void) {
  int arr[5][4] = {
      {1, 2, 3, 4},     {5, 6, 7, 8},     {9, 10, 11, 12},
      {13, 14, 15, 16}, {17, 18, 19, 20},
  };

  printf("%d\n", GetTotal(arr, 5, 4));

  return EXIT_SUCCESS;
}
/*210*/
