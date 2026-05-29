#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 3번 배열에서 인덱스 찾기.

/*Find(int a[], int n, int key): 배열 a의 n개 원소 중
key가 처음 나타나는 인덱스를 반환. 없으면 -1.
main: 배열 {11, 22, 33, 22, 44}에서 33, 22, 55를 찾아본 결과 출력.
*/



int  Find(int a[], int n, int key);
void PrintIntegerArray(int a[], int n);

int main(void)
{
    int list[5] = { 11, 22, 33, 22, 44 };
    int idx;

    printf("배열: ");
    PrintIntegerArray(list, 5);

    idx = Find(list, 5, 33);
    if (idx == -1) printf("33 은(는) 배열에 없습니다.\n");
    else           printf("33 은(는) 인덱스 %d 에 있습니다.\n", idx);

    idx = Find(list, 5, 22);
    if (idx == -1) printf("22 은(는) 배열에 없습니다.\n");
    else           printf("22 은(는) 인덱스 %d 에 있습니다.\n", idx);

    idx = Find(list, 5, 55);
    if (idx == -1) printf("55 은(는) 배열에 없습니다.\n");
    else           printf("55 은(는) 인덱스 %d 에 있습니다.\n", idx);

    return 0;
}

int Find(int a[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == key)
            return i;
    }
    return -1;
}

void PrintIntegerArray(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

