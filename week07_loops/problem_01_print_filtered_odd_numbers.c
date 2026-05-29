
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1번 문제. 
/* 설계: 시작값과 끝값을 입력받고, 특정 배수를 제외한 홀수를 출력하는 프로그램 
main 함수에서 시작값, 끝값, 배수를 입력받고 DisplaOdd 함수를 호출 
*/

void DisplaOdd(int s, int e, int m);

void main()
{
	int start, end, multiple;
	printf("시작값을 입력하시오: ");
	scanf("%d", &start);
	printf("끝값을 입력하시오: ");
	scanf("%d", &end);
	printf("배수를 입력하시오: ");
	scanf("%d", &multiple);
	DisplaOdd(start, end, multiple);
}		
/*DisplayOdd 함수는 시작값부터 끝값까지의 숫자 중에서
홀수이면서 특정 배수에 해당하지 않는 숫자를 if문으로 선별하여 출력.
count 변수를 사용하여 10개마다 줄바꿈을 하도록 구현.
*/

void DisplaOdd(int s, int e, int m)
{
	int count = 0;
	for (int i = s; i <= e; i++)
	{
		if (i % 2 != 0 && i % m != 0)
		{
			printf("%d ", i);
			count++;
			if (count % 10 == 0)
				printf("\n");
		}
	}
}
