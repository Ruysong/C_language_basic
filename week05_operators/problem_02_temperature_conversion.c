#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 2번 온도변환 
// double converter();

int main() {
	
	int f;
	double c;
	printf("화씨온도는? ");
	scanf("%d", &f);
	c = converter(f);
	
	printf("화씨온도 %d 도= 섭씨 %.1lf 도\n", f, c);


}

double converter(int f) {
	double c;
	c = 5.0 / 9.0 * (f - 32);
	return c;
}
