#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
2번. 설계:
main 함수에서 세 분반의 점수를 저장할 포인터 배열 scores를 선언한다.
AllocateScores 함수에서 각 분반의 학생 수 n을 입력받는다.
n + 1개의 요소를 갖는 int형 배열을 동적 할당한다.
생성된 배열을 scores 배열의 각 요소에 연결한다.
생성된 배열의 첫 번째 요소에 해당 분반의 학생 수 n을 저장한다.
InputScores 함수에서 각 분반 학생들의 점수를 입력받아 배열에 저장한다.
PrintScores 함수에서 PrintIntegerArray 함수를 이용해 점수표를 출력한다.
동적 할당한 메모리를 해제한다.
*/

int* CreateIntegerArray(int n);
void AllocateScores(int* s[], int size);
void InputScores(int* s[], int size);
void PrintIntegerArray(int a[], int size);
void PrintScores(int* s[], int size);
void FreeScores(int* s[], int size);

int main(void)
{
    int* scores[3];

    AllocateScores(scores, 3);
    InputScores(scores, 3);
    PrintScores(scores, 3);
    FreeScores(scores, 3);

    return 0;
}

int* CreateIntegerArray(int n)
{
    int* arr;

    arr = (int*)malloc(sizeof(int) * n);

    return arr;
}

void AllocateScores(int* s[], int size)
{
    int i;
    int n;

    for (i = 0; i < size; i++)
    {
        printf("%d분반의 학생수는? ", i + 1);
        scanf("%d", &n);

        s[i] = CreateIntegerArray(n + 1);
        s[i][0] = n;
    }
}

void InputScores(int* s[], int size)
{
    int i;
    int j;
    int n;

    for (i = 0; i < size; i++)
    {
        n = s[i][0];

        printf("\n>>> %d반의 성적 입력\n", i + 1);

        for (j = 1; j <= n; j++)
        {
            printf("#%d? ", j);
            scanf("%d", &s[i][j]);
        }
    }
}

void PrintIntegerArray(int a[], int size)
{
    int i;

    for (i = 1; i <= size; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}

void PrintScores(int* s[], int size)
{
    int i;
    int n;

    printf("\n### 점수표 ###\n");

    for (i = 0; i < size; i++)
    {
        n = s[i][0];

        printf("%d반(%d명): ", i + 1, n);
        PrintIntegerArray(s[i], n);
    }
}

void FreeScores(int* s[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        free(s[i]);
    }
}
