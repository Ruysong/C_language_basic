#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 4번 문제. 
/* 설계:
main 함수에서 InputPositiveData 함수를 호출하여 나이를 입력받는다.
InputPositiveData 함수는 사용자로부터 양의 정수 하나를 입력받아 반환한다.
이때 0 이하의 값이 입력되면 올바른 값이 입력될 때까지 반복해서 다시 입력받는다.
입력받은 나이를 기준으로 main 함수에서 성년(19세 이상)인지
미성년(19세 미만)인지 판단하여 출력한다.
*/

int InputPositiveData(void);

int main(void)
{
	int age;
	printf("나이를 입력하시오: ");
	age = InputPositiveData();

	if (age >= 19)
		printf("성년입니다.\n");
	else
		printf("미성년입니다.\n");

	return 0;
}

/*InputPositiveData 함수는 사용자로부터 양의 정수 하나를 입력받아 반환
이때 0 이하의 값이 입력되면 올바른 값이 입력될 때까지 반복해서 다시 입력받는다.
*/
int InputPositiveData(void)
{
	int num;
	scanf("%d", &num);

	while (num <= 0)
	{
		printf("0보다 큰 값을 다시 입력하시오: ");
		scanf("%d", &num);
	}

	return num;
}
