#include <stdio.h>
#define PI 3.14159265



void show_circle_area(double r);
// 2번문제
// void main(void) {

	
	//반지름 1인 원의 넓이를 구해 출력
	show_circle_area(1);
	// 반지름 10인 원의 넓이를 구해 출력
	show_circle_area(10);

	
}

void show_circle_area(double r) {
	double area = PI * r * r;
	printf("반지름 %g인 원의 넓이: %g \n", r, area);
	}
