#include<stdio.h>

// 2번 최대/최소값 찾기

/*설계: 임의의 초기값 5개를 갖는 실수형 배열을 선언하고,
반복문을 이용해 최소값과 그 첨자값을 찾는다.*/

int main() {
	float arr[5] = {3.5, 1.2, 4.6, 0.9, 2.3}; 
	float min = arr[0];
	int min_index = 0; 
	// 1단계: 반복문을 이용해 최소값을 찾아 출력하라
	for (int i = 1; i < 5; i++) {
		if (arr[i] < min) {
			min = arr[i]; 
			min_index = i; 
		}
	}
	printf("최소값: %.2f\n", min); 


	// 2단계: 반복문을 이용해 최소값과 그 요소의 첨자값을 출력하라.
	printf("최소값의 첨자값: %d\n", min_index); 
	return 0;
}
