#include <stdlib.h>
#include <wchar.h>

int main(void) {
  wchar_t *pwszData = L"String\n";
  wchar_t wszData[32];

  wcscpy(wszData, pwszData);
  wprintf(wszData);

  return EXIT_SUCCESS;
}
/*String*/
