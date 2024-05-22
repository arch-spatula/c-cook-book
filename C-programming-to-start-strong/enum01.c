#include <stdio.h>
#include <stdlib.h>

enum ACTION { MOVE, JUMP, ATTACK };

typedef enum COLOR { RED = 100, GREEN, BLUE } COLOR;

int main(void) {
  enum ACTION act = MOVE;
  COLOR color = GREEN;

  printf("ACTION: %d, COLOR: %d\n", act, color);

  return EXIT_SUCCESS;
}
/*ACTION: 0, COLOR: 101*/
