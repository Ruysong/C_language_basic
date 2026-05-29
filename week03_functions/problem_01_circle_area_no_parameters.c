#include <stdio.h>
#define PI 3.14159265
void show_circle_area_1();
void show_circle_area_10();
// 1번문제.매개변수와 반환값을 모두 갖지 않는 함수
// int main() {

	// 반지름 1인 원의 넓이를 구해 출력
	show_circle_area_1();

	// 반지름 10인 원의 넓이를 구해 출력
	show_circle_area_10();


	return 0;

}
void show_circle_area_1() {
	double radius = 1.0;
	double area = PI * radius * radius;
	printf("반지름 1인 원의 넓이: %g \n", area);
}
void show_circle_area_10() {
	double radius = 10.0;
	double area = PI * radius * radius;
	printf("반지름 10인 원의 넓이: %g \n", area);
}
