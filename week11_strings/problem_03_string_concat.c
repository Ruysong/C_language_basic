#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  3번문제 문자열 연결
  [설계]
  - main: 두 문자열 s1, s2 입력, StringConcat으로 s1 뒤에 s2 이어붙임 , 출력
  - StringConcat(char s1[], char s2[]):
      1) s1의 끝('\0') 위치를 i로 찾는다
      2) 그 위치부터 s2[j]를 차례로 복사
      3) 끝에 '\0' 추가
    s1 배열 크기는 충분히 크다고 가정
 */

void StringConcat(char s1[], char s2[]);

int main(void)
{
    char s1[200];
    char s2[100];

    printf("첫 번째 문자열: ");
    scanf("%s", s1);
    printf("두 번째 문자열: ");
    scanf("%s", s2);

    StringConcat(s1, s2);

    printf("연결된 문자열: %s\n", s1);
    return 0;
}

void StringConcat(char s1[], char s2[])
{
    int i = 0;
    int j = 0;

    
    while (s1[i] != '\0') {
        i++;
    }

    for (j = 0; s2[j] != '\0'; j++) {
        s1[i + j] = s2[j];
    }
    s1[i + j] = '\0';
}

