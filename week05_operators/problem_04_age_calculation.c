#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 4번 나이계산
// void ShowNext1(int age);
void ShowNext2(int age);
int main()
{
	int age;
	printf("나이를 입력하시오 : ");
	scanf("%d", &age);
	ShowNext1(age);
	ShowNext2(age);
	return 0;
}

void ShowNext1(int age)
{
	printf("현재나이 : %d세\n", age++);
	printf("내년나이 : %d세\n", age);
}
void ShowNext2(int age)
{
	printf("현재나이 : %d세\n", age);
	printf("내년나이 : %d세\n", ++age);
}
