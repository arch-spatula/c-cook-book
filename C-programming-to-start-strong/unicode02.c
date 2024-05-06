#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main(void) {
  wchar_t *pwszData = L"String";
  char szData[32];
  size_t nConverted = 0;

  nConverted = wcstombs(NULL, pwszData, 32);
  printf("%ld\n", nConverted);

  nConverted = wcstombs(szData, pwszData, 32);
  printf("%s (%ld)\n", szData, nConverted);

  return EXIT_SUCCESS;
}
/*6*/
/*String (6)*/
