#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 1번 평균구하기. 
/*GetIntegerArray(int a[], int n, int s): 배열 a에 최대 n개의 정수를 입력받되, end 값 s가 입력되면 입력 종료. 실제 입력된 개수를 반환.
PrintIntegerArray(int a[], int n): 배열 a의 n개 원소를 출력.
AverageIntegerArray(int a[], int n): 배열 a의 n개 원소의 평균(double)을 반환. n이 0이면 0.0 반환.
main: 사용자에게 end 값과 데이터를 입력받아 위 세 함수를 차례로 호출.*/

int    GetIntegerArray(int a[], int n, int s);
void   PrintIntegerArray(int a[], int n);
double AverageIntegerArray(int a[], int n);

int main(void)
{
    int    arr[100];
    int    count;
    double avg;

    printf("배열에 저장할 정수들을 입력하세요 (-1 입력 시 종료):\n");
    count = GetIntegerArray(arr, 100, -1);

    printf("입력된 배열: ");
    PrintIntegerArray(arr, count);

    avg = AverageIntegerArray(arr, count);
    printf("평균: %.4lf\n", avg);

    return 0;
}

int GetIntegerArray(int a[], int n, int s)
{
    int i;
    int x;

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == s) break;
        a[i] = x;
    }
    return i;
}

void PrintIntegerArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

double AverageIntegerArray(int a[], int n)
{
    int i;
    long long sum = 0;

    if (n <= 0) return 0.0;

    for (i = 0; i < n; i++)
        sum += a[i];
    return (double)sum / n;
}

