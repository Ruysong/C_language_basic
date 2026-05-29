#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  6번문제
  [설계]
  - 문제: 사용자로부터 공백을 포함하는 5개의 문자열을 입력받아
          3번에서 작성한 StringConcat을 활용해
          하나의 1차원 배열(msg)에 모두 이어붙여 저장한 뒤 출력.
          각 문자열의 최대 길이는 10 미만.
 
  - msg[50]: 최대 9글자 * 5개 + '\0' 여유 = 충분한 크기의 1차원 배열
    처음에 msg[0] = '\0'으로 초기화 (빈 문자열 상태)
         StringConcat(msg, buf)를 5번 호출하면 buf가 msg 뒤에 차례로 붙음
 
  - 공백 포함 입력은 scanf의 " %9[^\n]" 서식 사용
      · 앞 공백: 직전 입력의 '\n' 흡수
      · 너비 9: 임시 버퍼 크기 10에서 '\0' 자리 확보
 
  [함수]
    - StringConcat(char s1[], char s2[]): 3번 문제에서 작성한 함수 재사용
      (s1 끝을 찾아 그 위치부터 s2를 복사, 마지막에 '\0')
 */

void StringConcat(char s1[], char s2[]);

int main(void)
{
    char msg[50];  
    char buf[10];  
    msg[0] = '\0'; 

    for (int i = 0; i < 5; i++) {
        printf("문자열 %d을 입력해주세요: ", i + 1);
        scanf(" %9[^\n]", buf);

        StringConcat(msg, buf); 
    }

    printf("\n이어붙인 결과: %s\n", msg);

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

