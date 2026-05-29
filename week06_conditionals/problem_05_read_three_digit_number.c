#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 5번문제, // 메인함수에서 0~999 사이의 양의 정수를 입력받고 readNum 함수에 전달한다.
// readNum 함수에서는 입력받은 수를 백의 자리, 십의 자리, 일의 자리로 분리한 뒤
// 각 자릿수를 차례대로 출력한다.
// 숫자를 한글로 바꾸는 반복되는 부분은 PrintDigit 함수를 이용하여 구현한다.

void readNum(int);
void PrintDigit(int);

int main() {
    int num;

    printf("0부터 999 사이의 정수를 입력하시오: ");
    scanf("%d", &num);

    readNum(num);
    printf("\n");

    return 0;
}

void readNum(int num) {
    int hundreds, tens, ones;

    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;

    PrintDigit(hundreds);
    PrintDigit(tens);
    PrintDigit(ones);
}

void PrintDigit(int digit) {
    switch (digit) {
    case 0:
        printf("영");
        break;
    case 1:
        printf("일");
        break;
    case 2:
        printf("이");
        break;
    case 3:
        printf("삼");
        break;
    case 4:
        printf("사");
        break;
    case 5:
        printf("오");
        break;
    case 6:
        printf("육");
        break;
    case 7:
        printf("칠");
        break;
    case 8:
        printf("팔");
        break;
    case 9:
        printf("구");
        break;
    }
}
