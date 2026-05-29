#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 6번 배열 합계.

/*
3행 6열 int 배열을 사용.
사용자는 2행 5열의 데이터만 입력하고,
- 마지막 열(인덱스 5): 그 행의 합계
- 마지막 행(인덱스 2): 그 열의 합계
- 오른쪽 아래(2,5)   : 전체 합계
를 직접 계산해 채워넣는다.

InputMatrix : 2x5 데이터 입력
FillSums    : 행 합 / 열 합 / 전체 합을 마지막 행, 열에 채움
PrintMatrix : 3x6 행렬 전체 출력
*/

void InputMatrix(int m[][6]);
void FillSums(int m[][6]);
void PrintMatrix(int m[][6]);

int main(void)
{
    int mat[3][6] = { 0 };

    printf("2 x 5 배열의 원소를 입력하세요:\n");
    InputMatrix(mat);

    FillSums(mat);

    printf("\n[합계 포함 3 x 6 행렬]\n");
    PrintMatrix(mat);

    return 0;
}

void InputMatrix(int m[][6])
{
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &m[i][j]);
}

/* 행별 합 -> 6번째 열, 열별 합 -> 3번째 행, 전체 합 -> (2,5) */
void FillSums(int m[][6])
{
    int i, j;
    int sum;

    /* 각 행의 합을 마지막 열(j=5)에 저장 */
    for (i = 0; i < 2; i++) {
        sum = 0;
        for (j = 0; j < 5; j++)
            sum += m[i][j];
        m[i][5] = sum;
    }

    /* 각 열의 합을 마지막 행(i=2)에 저장 */
    for (j = 0; j < 5; j++) {
        sum = 0;
        for (i = 0; i < 2; i++)
            sum += m[i][j];
        m[2][j] = sum;
    }

    /* 전체 합을 (2,5)에 저장 */
    sum = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 5; j++)
            sum += m[i][j];
    m[2][5] = sum;
}

/* 3 x 6 행렬 출력 */
void PrintMatrix(int m[][6])
{
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++)
            printf("%5d ", m[i][j]);
        printf("\n");
    }
}

