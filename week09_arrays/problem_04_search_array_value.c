#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 4번 특정값 검색


// 설계: 먼저 정수형 배열 list를 선언하고 초기값을 할당한다.
// 그런 다음, 사용자로부터 정수값 key를 입력받는다.
// 1단계: 반복문을 사용하여 배열 list에서 key값이 존재하는지 검색한다.
// 2단계: key값이 존재하면 일치하는 첫 번째 요소의 인덱스 값을 출력하고,
// 존재하지 않으면 "없다"라고 출력한다.

int main() {
	int list[10] = {5, 3, 8, 1, 4, 9, 2, 7, 6, 0}; 
	int key;
	printf("검색할 정수를 입력하세요: ");
	scanf("%d", &key); 
	
	int index = -1; 	// 1단계: 반복문을 사용하여 배열 list에서 key값이 존재하는지 검색
	for (int i = 0; i < 10; i++) {
		if (list[i] == key) { 
			index = i; 
			break; 
		}
	}
	printf("검색 결과: ");
	if (index != -1) {
		printf("key 값과 일치하는 첫 번째 요소의 인덱스: %d\n", index);
	} else {
		printf("없다\n");
	}
	
	// 2단계: key값이 존재하면 인덱스 출력, 존재하지 않으면 "없다" 출력
	if (index != -1) {
		printf("key 값과 일치하는 첫 번째 요소의 인덱스: %d\n", index);
	} else {
		printf("없다\n");
	}
	
	return 0;
}


