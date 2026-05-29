#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 3번 문제. 
/* 설계: 학생 5명의 세 과목 점수를 입력받아 평균 점수에 따른 학점을 출력하는 프로그램
main 함수에서 학생의 세 과목 점수를 입력받고 GetGrade 함수를 호출하여 학점을 계산

*/


int InputScore(void);
char GetGrade(int, int, int);
void main()
{
	int score1, score2, score3;
	char grade;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("학생 %d의 세 과목 점수를 입력하시오:\n", i + 1);
		score1 = InputScore();
		score2 = InputScore();
		score3 = InputScore();
		grade = GetGrade(score1, score2, score3);
		printf("학생 %d의 학점은 %c입니다.\n", i + 1, grade);
	}
	}
/*InputScore 함수는 점수를 입력받고 유효성을 검사하여 반환
if문을 사용해 점수에 대해 판별. 올바를때만 while문 탈출 가능.
*/
int InputScore(void)
{
	int score;
	while (1)
	{
		printf("점수를 입력하시오 (0-100): ");
		scanf("%d", &score);
		if (score >= 0 && score <= 100)
			return score;
		else
			printf("유효하지 않은 점수입니다. 다시 입력하시오.\n");
	}
}
/*
GetGrade 함수는 세 과목 점수의 평균을 계산하고 학점을 반환
*/
char GetGrade(int score1, int score2, int score3)
{
	int average = (score1 + score2 + score3) / 3;
	if (average >= 90)
		return 'A';
	else if (average >= 80)
		return 'B';
	else if (average >= 70)
		return 'C';
	else if (average >= 60)
		return 'D';
	else
		return 'F';
}
