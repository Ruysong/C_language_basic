#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 3번 배열에 입력받기

/*배열에 정수를 입력받아 저장한 후 출력하라
1단계; 5개의 정수를 입력받아 5개 모두순서대로 출력하라

2단계 최대 5개의 정수를 입력받되, -1이 입력되면 입력을 마치고
그 전까지 입력된 정수들만 출력한다.*/

int main() {
	int arr[5]; 
	int count = 0; 
	// 1단계: 5개의 정수를 입력받아 5개 모두 순서대로 출력하라
	printf("5개의 정수를 입력하세요:\n");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	printf("입력된 정수들:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	// 2단계: 최대 5개의 정수를 입력받되, -1이 입력되면 입력을 마치고 그 전까지 입력된 정수들만 출력한다.
	printf("최대 5개의 정수를 입력하세요 (-1 입력 시 종료):\n");
	while (count < 5) {
		int num;
		scanf("%d", &num);
		if (num == -1) {
			break;
		}
		arr[count] = num;
		count++;
	}
	
	printf("입력된 정수들:\n");
	for (int i = 0; i < count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
