#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  3번문제
  [설계]
  - 문제: 정수 배열에서 start ~ end 인덱스 범위의 요소들의 합을 구함
  - 함수 시그니처: int sumRangeWithIndex(int* array, int start, int end)
      int* array는 배열 이름을 그대로 받음 (배열 이름이 곧 첫 원소의 주소)
      start, end는 합산 범위의 시작/끝 인덱스 (양 끝 포함)
      가정: start <= end
  - 구현: i를 start부터 end까지 증가시키며 array[i]를 누적
          포인터로 받았어도 배열처럼 array[i] 표기 사용 가능
 */

int sumRangeWithIndex(int* array, int start, int end);

int main(void)
{
    int score[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int start, end;

    printf("시작 인덱스와 끝 인덱스 (0~9): ");
    scanf("%d %d", &start, &end);

    int sum = sumRangeWithIndex(score, start, end);
    printf("score[%d] ~ score[%d]의 합 = %d\n", start, end, sum);

    return 0;
}

int sumRangeWithIndex(int* array, int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += array[i];
    }
    return sum;
}

