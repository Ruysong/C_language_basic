#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//사용자로부터 임의의 두 실수를 입력받은후 그수의 차를 구하시오. 
// 1번문제 , // 메인함수에서 두 실수를 입력받고, 차를 구하는 함수에서, if문을 이용해 더 큰수를 구하고
// 그 큰수에서 작은수를 빼서 차를 구한 후, 그 값을 result에 담아 메인함수에서 출력함
double Difference(double, double);

int main() {

	double num1, num2, result;
	printf("두 실수를 입력하시오: ");
	scanf("%lf %lf", &num1, &num2);
	result = Difference(num1, num2);
	printf("두 수의 차는 %g입니다.\n", result);
	return 0;

}

double Difference(double a, double b) {
	double result;
	if (a > b) {
		result = a - b;
	}
	else {
		result = b - a;
	}
	return result;
}
