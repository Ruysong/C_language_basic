#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 4번 배열 요소의 삭제
/*Delete(int a[], int s, int p): 크기 s인 배열 a에서 인덱스 p의 원소를 삭제.
p+1부터 s-1까지의 원소를 한 칸씩 앞으로 당기고, 새로운 크기 s-1을 반환.
main: 배열 {11, 22, 33, 44, 55}(s=5)에서 사용자에게 삭제할 인덱스를 입력받아 
삭제하고 결과 출력.
*/

int  Delete(int a[], int s, int p);
void PrintIntegerArray(int a[], int n);

int main(void)
{
    int arr[10] = { 11, 22, 33, 44, 55 };
    int size = 5;
    int pos;

    printf("초기 배열 (size=%d): ", size);
    PrintIntegerArray(arr, size);

    printf("삭제할 인덱스를 입력하세요 (0 ~ %d): ", size - 1);
    scanf("%d", &pos);

    size = Delete(arr, size, pos);

    printf("삭제 후 배열 (size=%d): ", size);
    PrintIntegerArray(arr, size);

    return 0;
}

int Delete(int a[], int s, int p)
{
    int i;

    if (p < 0 || p >= s) {
        printf("잘못된 인덱스입니다.\n");
        return s;
    }

    for (i = p; i < s - 1; i++)
        a[i] = a[i + 1];

    return s - 1;
}

void PrintIntegerArray(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

