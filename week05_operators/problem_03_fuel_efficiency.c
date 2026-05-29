#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 3번 연비계산
// double mileage(int start,int end,int fuel);
int main() {

	int start, end, fuel;
	double mile;
	printf("출발지점 주행거리계 수치: ");
	scanf("%d", &start);
	printf("도착지점 주행거리계 수치: ");
	scanf("%d", &end);
	printf("사용한 연료량: ");
	scanf("%d", &fuel);

	mile = mileage(start, end, fuel);
	printf("연료 1리터당 주행거리는 %gkm", mile);

}

double mileage(int start,int end,int fuel) {
	double result;
	result = (double)(end - start) / (double)fuel;
	return result;
}

