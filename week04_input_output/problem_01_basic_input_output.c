#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 1번문제. 사용자 입출력 연습
// double getDouble();
char getChar();

int main() {
	
	double i, j;
	char a;
	printf("첫번째 실수는? ");
	i= getDouble();
	printf("두번째 실수는? ");
	j= getDouble();
	printf("하나의 문자는? ");
	a= getChar();
	printf("[%10g]\n[%10g]\n[%10c]\n", i,j,a);
		
	return 0;
}
double getDouble() {
	double num;
	scanf("%lf", &num);
	return num;
}
char getChar() {
	char ch;
	scanf(" %c", &ch);
	return ch;
}

