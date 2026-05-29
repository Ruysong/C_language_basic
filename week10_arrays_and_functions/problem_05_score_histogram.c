#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 5번 성적분포표 작성.

/*점수를 -1이 들어올 때까지 입력받아 0~9, 10~19, …, 90~99, 100 의 11개 구간 도수를 계산.
GetScores(int a[], int n): -1이 들어올 때까지 점수 입력, 입력된 개수 반환.
BuildHistogram(int scores[], int n, int hist[]): 점수 배열을 돌면서 구간 인덱스를 정해 hist[]에 카운트. 100점이면 hist[10], 그 외엔 score / 10.
PrintHistogram(int hist[]): 11개 구간의 라벨과 별표(*)로 막대 출력.
main: 위 함수를 차례로 호출.

*/
int  GetScores(int a[], int n);
void BuildHistogram(int scores[], int n, int hist[]);
void PrintHistogram(int hist[]);

int main(void)
{
    int scores[101];
    int hist[11] = { 0 };
    int count;

    printf("점수를 입력하세요. 점수는 0점에서 100점까지입니다. (-1 입력 시 종료):\n");
    count = GetScores(scores, 100);

    BuildHistogram(scores, count, hist);
    PrintHistogram(hist);

    return 0;
}

int GetScores(int a[], int n)
{
    int i;
    int x;

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == -1) break;
        a[i] = x;
    }
    return i;
}

void BuildHistogram(int scores[], int n, int hist[])
{
    int i;
    int s;
    int idx;

    for (i = 0; i < n; i++) {
        s = scores[i];
        if (s == 100) idx = 10;
        else          idx = s / 10;
        hist[idx]++;
    }
}

void PrintHistogram(int hist[])
{
    int i, j;

    for (i = 0; i < 11; i++) {
        if (i == 10)
            printf("  100  | ");
        else
            printf(" %d-%d | ", i * 10, i * 10 + 9);

        for (j = 0; j < hist[i]; j++)
            printf("*");
        printf("\n");
    }
}

