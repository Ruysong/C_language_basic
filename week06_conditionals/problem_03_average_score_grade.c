#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 3번문제, // 메인함수에서 세 과목의 점수를 각각 입력받고, InputScore 함수에서 각 점수가
// 0~100 사이의 유효한 정수인지 판별하여 반환한다.
// 세 점수가 모두 유효한 경우에는 GetAverage 함수에서 평균을 계산하고,
// GetGrade 함수에서 평균에 따라 최종 학점을 판별하여 반환한다.
// 하나라도 유효하지 않은 점수가 입력되면 오류 메시지를 출력한다.
int InputScore(void);
double GetAverage(int, int, int);
char GetGrade(double);

int main() {
    int score1, score2, score3;
    double avg;
    char grade;

    printf("첫 번째 과목 점수를 입력하시오: ");
    score1 = InputScore();

    printf("두 번째 과목 점수를 입력하시오: ");
    score2 = InputScore();

    printf("세 번째 과목 점수를 입력하시오: ");
    score3 = InputScore();

    if (score1 == -1 || score2 == -1 || score3 == -1) {
        printf("유효하지 않은 점수가 입력되었습니다.\n");
    }
    else {
        avg = GetAverage(score1, score2, score3);
        grade = GetGrade(avg);
        printf("최종 학점은 %c입니다.\n", grade);
    }

    return 0;
}

int InputScore(void) {
    int score;
    scanf("%d", &score);

    if (score >= 0 && score <= 100) {
        return score;
    }
    else {
        return -1;
    }
}

double GetAverage(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

char GetGrade(double avg) {
    if (avg >= 87.6) {
        return 'A';
    }
    else if (avg >= 76.5) {
        return 'B';
    }
    else if (avg >= 65.4) {
        return 'C';
    }
    else if (avg >= 50.0) {
        return 'D';
    }
    else {
        return 'F';
    }
}
