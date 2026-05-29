#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 5번 시간변환
// void print(int sec);
int main() {
	int sec;
	printf("초단위로 시간을 입력하세요: ");
	scanf("%d", &sec);
	print(sec);
	return 0;
}

void print(int sec) {
	int hour, min, second;
	hour = sec / 3600;
	min = (sec % 3600) / 60;
	second = sec % 60;
	printf("%d초는 %d시간 %d분 %d초입니다\n", sec, hour, min, second);
}
