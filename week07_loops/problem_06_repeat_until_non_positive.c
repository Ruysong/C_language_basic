#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 6번 문제. 
/* 설계:
main 함수에서는 반복문을 사용하여 정수를 계속 입력받는다.
InputData 함수는 정수 하나를 입력받아 반환한다.
반환된 값이 0 이하이면 반복을 종료하고,
양수이면 DisplayTriangle 함수를 호출하여 삼각형을 출력한다.
DisplayTriangle 함수는 중첩 반복문을 사용하여
오른쪽 정렬된 높이 h의 삼각형을 출력한다.
*/

int InputData(void);
void DisplayTriangle(int h);

int main(void)
{
	int num;

	while (1)
	{
		num = InputData();

		if (num <= 0)
			break;

		DisplayTriangle(num);
	}

	return 0;
}

/* 
사용자로부터 정수 하나를 입력받아 반환하는 함수
이 문제에서는 0 이하의 값이 입력되면 프로그램을 종료해야 하므로
입력값을 그대로 반환한다.
*/
int InputData(void)
{
	int num;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	return num;
}

/* 
높이 h를 전달받아 오른쪽 정렬된 삼각형을 출력하는 함수
바깥쪽 반복문은 줄 수를 제어하고,
첫 번째 안쪽 반복문은 앞쪽 공백의 개수를 출력하며,
두 번째 안쪽 반복문은 별의 개수를 출력한다.
i번째 줄에는 공백을 h-i개, 별을 i개 출력한다.
*/
void DisplayTriangle(int h)
{
	int i, j;

	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= h - i; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
}
