#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  4번문제
  [설계]
  - main: 두 문자열 입력 받아 StringComp 결과를 출력
  - StringComp(char s1[], char s2[]):
      같은 위치의 문자를 처음부터 비교
      - 두 문자가 다르면:  1  반환
      - 끝까지 모두 같고 길이도 같으면 0 반환
     대소문자 구분 (예: "hi" vs "HI"는 다른 문자열)
 */

int StringComp(char s1[], char s2[]);

int main(void)
{
    char s1[100];
    char s2[100];

    printf("첫 번째 문자열: ");
    scanf("%s", s1);
    printf("두 번째 문자열: ");
    scanf("%s", s2);

    int result = StringComp(s1, s2);
    if (result == 0) {
        printf("두 문자열은 같습니다.\n");
    }
    else if (result == 1) {
        printf("문자열이 다릅니다.\n");
    }
    
    return 0;
}

int StringComp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 1;
           }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0') return 0;
    if (s1[i] == '\0' || s2[i] == '\0') return 1; 
}

