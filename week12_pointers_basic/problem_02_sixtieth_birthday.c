#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  2번문제
  [설계]
  - 문제: 사용자의 생일(연/월/일)을 입력받아 만 60세 생일을 출력
  - InputDate(int* year, int* month, int* day):
      정수 3개를 한 번에 입력받아 호출측 변수에 저장
      매개변수가 이미 주소(포인터)이므로 scanf에서 &를 붙이지 않음
  - main: InputDate 호출 후 year에 60을 더해 만 60세 생일을 계산하고 출력
          (만 60세 생일 계산은 호출측인 main에서 수행)
 */

void InputDate(int* year, int* month, int* day);

int main(void)
{
    int year, month, day;

    InputDate(&year, &month, &day);

    int year60 = year + 60;

    printf("입력하신 생일: %d년 %d월 %d일\n", year, month, day);
    printf("만 60세 생일: %d년 %d월 %d일\n", year60, month, day);

    return 0;
}

void InputDate(int* year, int* month, int* day)
{
    printf("생년월일(연 월 일)을 입력하세요: ");
    scanf("%d %d %d", year, month, day);
}

