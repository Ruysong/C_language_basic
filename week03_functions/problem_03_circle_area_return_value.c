#include <stdio.h>
#define PI 3.14159265

int get_circle_area(double r);


// 3번문제
// void main(void) {

	double area1, area10;
	area1= get_circle_area(1);
	area10 = get_circle_area(10);

	printf("반지름 1인 원의 넓이: %g \n", area1);
	printf("반지름 10인 원의 넓이: %g \n", area10);

}

int get_circle_area(double r) {
	double area = PI * r * r;
	return area;
}
