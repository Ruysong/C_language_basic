#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1번 정수부와 소수부 분리 
// void DivideReal();

int main()
{
	printf("실수:");

	DivideReal();
	return 0;
}

void DivideReal()
{
	double num;
	int integerPart;
	double decimalPart;
	scanf("%lf", &num);
	integerPart = (int)num; // 정수부 추출
	decimalPart = num - integerPart; // 소수부 추출
	printf("정수부는 %d 이고 ", integerPart);
	printf("소수부 %.6lf이다.", decimalPart); // 소수부를 6자리까지 출력


}
