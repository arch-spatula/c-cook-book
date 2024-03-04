# c-cook-book

C 언어 래시피 모은 레포입니다. 더 정확히 C 언어로 배운 내용을 필기하고 줍줍한 레포입니다. 그래서 학습 자료가 체계적이지 않을 것입니다.

이 레포를 만든 이유는 C 언어를 학습하기 위해서 만들었습니다. 그리고 C 언어를 학습하는 이유는 전공자와 차이가 안나기 위해서입니다. 참고로 나중에 정리는 블로그에서 하고 작업만 할지도 모릅니다.

- [C/C++ 프로그래밍 입문자에게...](https://www.youtube.com/watch?v=J_CfRpCM_ic)

위 유튜브 영상을 참고하면 C언어로 최소한 B-Tree까지는 구현해야 합니다. 그것도 검색 없이 가능해야 합니다.

저는 DB, 운영체제까지 흉내를 내보려고 하겠습니다. 그 뒤에 rust로 넘어가겠습니다. 그전까지는 신입개발자 주제에 프론트 병보다 심각하다는 RUST 병을 피하기 위한 조치라고 생각해주시기 바랍니다. 

참고로 저는 neovim을 사용하고 바닥부터 설정하기 시작합니다. 원도우 사용하는 분들은 visual studio, Clion을 사용하든 알아서 하기 바랍니다.

## 학습자료

- 진행 중: [코딩도장](https://dojang.io/course/view.php?id=2)
- [C를 배우기 전에 반드시 알아야 할 것들](https://www.yes24.com/Product/Goods/17967251)
  - [x] 단순하게 1회독
- [독하게 시작하는 C 프로그래밍](https://www.yes24.com/Product/Goods/18732021)
- [Do it! 자료구조와 함께 배우는 알고리즘 입문 C 언어 편 (전면 개정판)](https://www.yes24.com/Product/Goods/114998692)
- [전문가를 위한 C](https://www.yes24.com/Product/Goods/114250605)
- [Effective C](https://www.yes24.com/Product/Goods/119423118)
- [깐깐하게 배우는 C](https://www.yes24.com/Product/Goods/58215872)
- [컴파일러 개발자가 들려주는 C 이야기](https://www.yes24.com/Product/Goods/105982099)
- [Crafting Interpreters 로버트 나이스트롬의 인터프리터 in Java, C](https://www.yes24.com/Product/Goods/123859288)

## 프로젝트

- [ ] 숫자야구 CLI
- [ ] 잭블랙의 블랙잭 CLI
- [ ] http 서버
- [ ] ws 서버
- [ ] 프로그램 UI
- [ ] 컴파일러
- [ ] 데이터베이스
- [ ] 운영체제
- [ ] 자바스크립트 엔진
- [ ] 브라우저

## 기타

gcc를 사용해서 컴파일 할 것입니다.

```sh
gcc -o 실행_파일이름 컴파일할_파일이름.c
```

```sh
./실행_파일이름
```

HelloWorld.c -> HelloWorld.obj -> HelloWorld.exe

프로그래머가 작성한 코드의 확장자는 c입니다. 컴파일을 하면 obj 확장자를 만드는데 부품이라고 생각하면 됩니다. 최종 결과는 링크인데 부품을 모아 완제품 실행파일을 만드는 것입니다.

지금 저는 vi에서 처리하면서 소스파일이 컴파일의 목적파일(obj)을 생성한 결과를 못보고 있습니다.

C언어 내부적으로 정확히 무슨 동작을 수행하는지 파악해야 합니다. 일반적인 컴파일러 이론입니다.

## 자료형

자료형은 일정한 크기의 메모리에 저장된 정보를 해석하는 방법입니다.

모든 자료형은 본질적으로 숫자입니다.

자료형은 메모리 해석 방법이나 저장 방식을 다루기 위해 이해해야 하는 중요한 지식입니다.

문자 상수는 문자 단위입니다. 문자열 상수와 구분하기 바랍니다. 리터럴 상수는 문자, 문자열, 정수, 실수인 상수입니다.

심볼릭 상수는 형한정과 전처리기입니다. 형한정은 `const int uMax = 100;`이 해당합니다. `#define`이 해당 합니다.

변수는 개수가 적을 수록 좋습니다. 변수는 메모리로 구현되며 메모리는 주소를 가집니다.

`char`: 영문자
`double`: 실수

### 보수와 음수 표현

보수는 반대로 세는 수입니다. 10에 대한 7의 보수는 3입니다. 10이 되기 위해 3의 보충이 필요합니다.

컴퓨터는 진법문제와 상관없이 보수를 더하는 방법으로 뺄셈을 구현합니다.

9 - 6 = 3 

위 식을 덧셈으로 구할 것입니다.

10에 대한 6의 보수는 4입니다. 10 = 6 + 4 

여기서 보수 4를 9에 더하고 십의 자리는 무시하면 덧셈으로 뻴셈을 구현한 것입니다.

9 + 4 = 13

13 - 10 = 3 

이렇게 되면 진법과 상관없는 원리입니다. 컴퓨터는 2진법을 사용해서 2의 보수를 사용해야 합니다.

1. 00000001

2. 11111110

3. 11111111

1에서 시작하고 모두 비트플립하고 1을 더했습니다. 1의 보수에서 1을 더해 2의 보수를 구현했습니다.

위에서 1을 더하면 1_0000_0000이 됩니다. 자릿수를 초과하고 초과한 값은 무시하게 됩니다. 절댓값을 더하고 자리올림을 무시하는 것으로 뺄셈을 결과적으로 구현한 것입니다.

아스키 코드는 8비트이고 char 자료형은 8비트입니다. 아스키 코드는 더 정확히 7비트이지만 확장비트를 포함해서 8비트로 맞춘 것입니다.

컴퓨터 입장에서 문자는 결국 정수에 불과합니다.

```c
#include <stdio.h>
#include <wchar.h>

int main(void)
{
	char ch = 'A';
	wchar_t wch = L'A';
	short sData = 10;
	int nData = 10;
	long lData = 10L;
	long int lnData = 10L;
	long long int llnData = 10LL;
	
	printf("ch: %c, wch: %lc, sData: %d, lData: %ld, llnData: %lld\n", ch, wch, sData, lData, llnData);

	unsigned char byNewData = 'A';
	unsigned short sNewData = 65535U;
	unsigned int uNewData = 1U;
	unsigned long int ulData = 1UL;
	unsigned long long int ullNewData = 1ULL;

	printf("byNewData: %c, sNewData: %u, uNewData: %u, ulData: %lu, ullNewData: %llu\n", byNewData, sNewData, uNewData, ulData, ullNewData);

	return 0;

}
```

printf는 형식에 맞춰서 사용해야 합니다.

형식을 변환할 때 각각 맞는 형식이어야 합니다.

