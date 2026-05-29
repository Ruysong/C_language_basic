#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  2번문제
  [설계]
  - main: src 문자열 입력 받음 , StringCopy로 dst에 복사 , 결과 출력
  - StringCopy(char dst[], char src[]):
      src[i]를 dst[i]에 그대로 복사하며 '\0' 만날 때까지 반복
      마지막에 '\0'까지 복사하여 문자열 종료 보장
 */

void StringCopy(char dst[], char src[]);

int main(void)
{
    char str1[100];
    char str2[100];

    printf("복사할 문자열을 입력하세요: ");
    scanf("%s", str1);

    StringCopy(str2, str1);

    printf("복사된 문자열: %s\n", str2);
    return 0;
}

void StringCopy(char dst[], char src[])
{
    int i = 0;
    for (i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';  
}

