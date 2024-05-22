#include <malloc/malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *pszData = NULL;

  pszData = (char *)malloc(sizeof(char) * 6);
  if (pszData == NULL) {
    perror("Failed to allocate memory");
    return EXIT_FAILURE;
  }

  printf("Allocated memory size: %zu\n", malloc_size(pszData));
  printf("Usable memory size: %zu\n", malloc_good_size(sizeof(char) * 6));

  free(pszData);
  return EXIT_SUCCESS;
}
