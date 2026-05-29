#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  1번문제
  [설계]
  - 문제: 초 단위 시각값 time을 시/분/초로 분할하여 호출측에 전달
  - 함수가 값 3개를 동시에 내보내야 하므로 반환값 대신
    포인터 매개변수(int* hour, int* min, int* sec)로 호출측 변수에 직접 저장
  - ConvertTimeToHMS(int time, int* hour, int* min, int* sec):
      1) *hour = time / 3600
      2) 남은 초 = time % 3600
      3) *min = 남은초 / 60
      4) *sec = 남은초 % 60
  - main: 초 입력 후 &h, &m, &s로 주소를 전달, 결과 출력
 */

void ConvertTimeToHMS(int time, int* hour, int* min, int* sec);

int main(void)
{
    int time;
    int h, m, s;

    printf("시각(초) ? ");
    scanf("%d", &time);

    ConvertTimeToHMS(time, &h, &m, &s);

    printf("%d초는 %d시간 %d분 %d초입니다.\n", time, h, m, s);
    return 0;
}

void ConvertTimeToHMS(int time, int* hour, int* min, int* sec)
{
    *hour = time / 3600;
    int remain = time % 3600;
    *min = remain / 60;
    *sec = remain % 60;
}

