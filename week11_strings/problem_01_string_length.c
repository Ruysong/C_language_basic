#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 문자열 길이 계산
//1번문제.
/*  [설계]
  - main: 문자열 입력 받아 StringLength 호출, 결과 출력
  - StringLength(char s[]): s[i]가 '\0'이 될 때까지 i를 증가시키며 카운트
     */
int StringLength(char s[]);

int main()
{
	char str[100];
	printf("문자열을 입력하세요: ");
	scanf("%s", str);
	
	int n = StringLength(str);
	printf("문자열의 길이는: %d\n", n);
	
	return 0;
}

int StringLength(char s[])
{
	int length = 0;
	for (int i = 0; s[i] != '\0';i++) {
		length++;
	}
	return length;
}

