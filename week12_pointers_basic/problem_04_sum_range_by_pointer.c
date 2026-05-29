#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  4번문제
  [설계]
  - 문제: 정수 배열에서 두 요소의 "주소" pStart, pEnd 사이의 합을 구함
  - 함수 시그니처: int sumRangeWithPosition(int* pStart, int* pEnd)
      인덱스가 아닌 두 원소의 주소 자체를 받는다는 점이 3번과의 차이
      가정: pStart <= pEnd
  - 구현: 포인터 p를 pStart부터 pEnd까지 한 칸씩 이동시키며 *p 누적
          p++는 int 한 칸(보통 4바이트)을 자동으로 이동
  - main: 인덱스를 입력받아 &score[start], &score[end] 형태로 주소를 전달
          (score + start, score + end 형태도 동일한 의미)
 */

int sumRangeWithPosition(int* pStart, int* pEnd);

int main(void)
{
    int score[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    int start, end;

    printf("시작 인덱스와 끝 인덱스 (0~9): ");
    scanf("%d %d", &start, &end);

    int sum = sumRangeWithPosition(&score[start], &score[end]);
    printf("score[%d] ~ score[%d]의 합 = %d\n", start, end, sum);

    return 0;
}

int sumRangeWithPosition(int* pStart, int* pEnd)
{
    int sum = 0;
    for (int* p = pStart; p <= pEnd; p++) {
        sum += *p;
    }
    return sum;
}

