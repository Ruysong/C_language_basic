#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 5번 문제. 
/* 설계:
main 함수에서 정수를 입력받고 readNum 함수를 호출한다.
readNum 함수는 전달받은 정수의 각 자리 숫자를 차례대로 분리하여
각 숫자에 해당하는 한글을 출력한다.
숫자 0이 입력된 경우에는 예외적으로 "영"만 출력한다.

GetDivisor 함수는 가장 높은 자리의 값을 알아내기 위한 기준값을 반환한다.
PrintDigitKor 함수는 한 자리 숫자를 전달받아 해당하는 한글을 출력한다.
*/

void readNum(int num);
int GetDivisor(int num);
void PrintDigitKor(int digit);
int main(void)
{
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	readNum(num);
	printf("\n");

	return 0;
}

/* 설계:
전달받은 정수의 각 자리 숫자를 왼쪽부터 차례대로 추출하여
해당 숫자에 맞는 한글을 출력하는 함수
입력이 0이면 "영"을 출력하고 종료한다.
그 외에는 GetDivisor 함수를 이용하여 가장 높은 자리의 기준값을 구한 뒤,
반복문을 사용하여 각 자리 숫자를 분리하고 PrintDigitKor 함수로 출력한다.
*/
void readNum(int num)
{
	int divisor, digit;
	if (num == 0)
	{
		printf("영");
		return;
	}


	divisor = GetDivisor(num);

	while (divisor > 0)
	{
		digit = num / divisor;
		PrintDigitKor(digit);
		num = num % divisor;
		divisor /= 10;
	}
}
int GetDivisor(int num)
{
	int divisor = 1;

	while (num >= 10)
	{
		num /= 10;
		divisor *= 10;
	}

	return divisor;
}

void PrintDigitKor(int digit)
{
	switch (digit)
	{
	case 0:
		printf("영");
		break;
	case 1:
		printf("일");
		break;
	case 2:
		printf("이");
		break;
	case 3:
		printf("삼");
		break;
	case 4:
		printf("사");
		break;
	case 5:
		printf("오");
		break;
	case 6:
		printf("육");
		break;
	case 7:
		printf("칠");
		break;
	case 8:
		printf("팔");
		break;
	case 9:
		printf("구");
		break;
	}
}
