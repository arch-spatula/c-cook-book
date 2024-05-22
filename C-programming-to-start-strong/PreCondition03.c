/*#include <stdio.h>*/
#include <stdlib.h>
#include <wchar.h>

#define MYUNICODE

#ifdef MYUNICODE
typedef wchar_t TCHAR;
#define _T(string) L##string
#define PRINT wprintf
#else
typedef char TCHAR;
#define _T(string) string
#define PRINT printf
#endif

int main(void) {
  TCHAR szData[32] = _T("Test string");
  /*PRINT(_T("%s\n"), szData);*/
  PRINT(szData);
  PRINT(_T("%ld, %ld\n"), sizeof(TCHAR), sizeof(szData));

  return EXIT_SUCCESS;
}
/*Test string*/
/*1, 16*/
