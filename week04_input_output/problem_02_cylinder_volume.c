#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14
//2번. 원기둥 부피 구하기.
// double getDouble();
char getChar();
double GetCylinderVol(double r, double h);
double GetArea(double r);

int main() {
	
	
	double r, h;
	printf("반지름을 입력하시오 ");
	r = getDouble();
	printf("높이를 입력하시오 ");
	h = getDouble();
	double area;
	area = GetArea(r);
	double vol;
	vol = GetCylinderVol(area, h);
	printf("원기둥의 부피는 %.1lf입니다.\n", vol);

	return 0;
}
double getDouble() {
	double num;
	scanf("%lf", &num);
	return num;
}
char getChar() {
	char ch;
	scanf(" %c", &ch);
	return ch;
}
double GetArea(double r) {
	double area = PI * r * r;
	return area;
}
double GetCylinderVol(double area, double h) {
	double vol;
	vol = area * h;
	return vol;
}
