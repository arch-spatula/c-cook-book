# Jack Black Black Jack 

C 언어 관련된 책을 읽거나 공부할 때마다 만들 것을 <C를 배우기 전에 반드시 알아야 할 것들>을 읽으면서 알게되었습니다.

숫자 야구보다 복잡하지만 너무 고급알고리즘이 나올정도로 어려운 것은 아니라고 합니다.

[블랙잭 카드게임 - 나무위키](https://namu.wiki/w/%EB%B8%94%EB%9E%99%EC%9E%AD(%EC%B9%B4%EB%93%9C%EA%B2%8C%EC%9E%84))

규칙은 CLI 사용자에게 최대한 유리한 방향으로 합니다.

<!-- TODO: 일단 쉽게 1덱으로 플레이합니다. 나중에는 N 덱이상 설정을 지원합니다.-->

```txt title=".gitignore"
JackBlackBlackJack
```

```sh
gcc -o JackBlackBlackJack JackBlackBlackJack.c -Wall -Wextra -Werror -O2 -std=c99 -pedantic
```

```sh 
./JackBlackBlackJack
```

시도를 시작한 날짜 폴더 내에 위 커맨드로 컴파일하고 실행하기 바랍니다.
