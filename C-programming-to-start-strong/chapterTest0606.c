#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int nAge = 0;

  scanf("%d", &nAge);

  if (nAge == 20)
    puts("당신은 성인입니다.");

  puts("End");

  return EXIT_SUCCESS;
}
