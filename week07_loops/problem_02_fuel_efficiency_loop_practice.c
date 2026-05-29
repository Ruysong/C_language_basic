
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2번 문제. 
/* 설계: 출발지점과 도착지점의 주행거리계 수치와 사용한 연료량을 입력받아
연료 1리터당 주행거리를 계산하는 프로그램
main 함수에서 출발지점, 도착지점, 사용한 연료량을 입력받고 FuelEfficiency 함수를 호출
FuelEfficiency 함수는 출발지점과 도착지점의 주행거리계 수치와 사용한 연료량을 이용하여
연료 1리터당 주행거리를 계산하여 반환
do while 루프를 사용하여 사용자가 다시 계산할 수 있도록 구현
*/

double FuelEfficiency(int start, int end, int fuel);
int main() {

	int start, end, fuel;
	double mile;
	char answer;
	do {
		printf("출발지점 주행거리계 수치: ");
		scanf("%d", &start);
		printf("도착지점 주행거리계 수치: ");
		scanf("%d", &end);
		printf("사용한 연료량: ");
		scanf("%d", &fuel);

		mile = FuelEfficiency(start, end, fuel);
		printf("연료 1리터당 주행거리는 %gkm", mile);
		printf("\n다시 계산하시겠습니까? (y/n): ");
		scanf(" %c", &answer);
	} while (answer == 'y' || answer == 'Y');
	return 0;
}

double FuelEfficiency(int start, int end, int fuel) {
	double result;
	result = (double)(end - start) / (double)fuel;
	return result;
}

