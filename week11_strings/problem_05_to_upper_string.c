#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  5번문제
  [설계]
  - main: 문자열 입력 받아 ToUpperString 호출,  결과 출력
  - ToUpperString(char s[]):
      s를 처음부터 끝('\0')까지 순회
      각 문자가 소문자('a'~'z')이면 'A' - 'a' 만큼 더해 대문자로 변환
     그 외 문자(이미 대문자, 숫자, 기호 등)는 그대로 둠
    */

void ToUpperString(char s[]);

int main(void)
{
    char str[100];
    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    ToUpperString(str);
    printf("대문자 변환 결과: %s\n", str);

    return 0;
}

void ToUpperString(char s[])
{
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] + ('A' - 'a');  
        }
    }
}

