#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2번문제, // 메인함수에서 과세표준 금액을 만원 단위로 입력받고,
// CalcTax 함수에서 if-else if 문을 이용해 과세표준 구간을 판별한 뒤,
// 각 구간에 맞는 세율과 누진공제액을 적용하여 세금을 계산하고,
// 그 값을 main 함수에서 출력함.

int CalcTax(int);
int main() {
    int income, tax;

    printf("과세표준 금액을 입력하시오(만원 단위): ");
    scanf("%d", &income);

    tax = CalcTax(income);

    printf("세금은 %d만원입니다.\n", tax);
    return 0;
}


int CalcTax(int income) {
    int tax;

    if (income <= 1400) {
        tax = income * 6 / 100;
    }
    else if (income <= 5000) {
        tax = income * 15 / 100 - 126;
    }
    else if (income <= 8800) {
        tax = income * 24 / 100 - 576;
    }
    else if (income <= 15000) {
        tax = income * 35 / 100 - 1544;
    }
    else if (income <= 30000) {
        tax = income * 38 / 100 - 1944;
    }
    else if (income <= 50000) {
        tax = income * 40 / 100 - 2594;
    }
    else if (income <= 100000) {
        tax = income * 42 / 100 - 3594;
    }
    else {
        tax = income * 45 / 100 - 6594;
    }

    return tax;
}
