#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 2번 배열 비교하기.

/* ArrayCmp: 두 배열의 처음 5개 원소가 모두 같으면 1, 아니면 0 반환
   PrintIntegerArray: 배열 a의 n개 원소를 한 줄에 출력 */   
int  ArrayCmp(int a1[], int a2[], int size);
void PrintIntegerArray(int a[], int n);

int main(void)
{
    int list1[5] = { 1, 2, 3, 4, 5 };
    int list2[5] = { 1, 2, 3, 4, 5 };
    int list3[5] = { 1, 2, 9, 4, 5 };
    int result;

    printf("list1: "); PrintIntegerArray(list1, 5);
    printf("list2: "); PrintIntegerArray(list2, 5);
    printf("list3: "); PrintIntegerArray(list3, 5);
    
    result = ArrayCmp(list1, list2, 5);
    if (result == 1)
        printf("list1과 list2는 같습니다.\n");
    else
        printf("list1과 list2는 다릅니다.\n");


    result = ArrayCmp(list1, list3, 5);
    if (result == 1)
        printf("list1과 list3은 같습니다.\n");
    else
        printf("list1과 list3은 다릅니다.\n");

    return 0;
}

int ArrayCmp(int a1[], int a2[], int size)
{
    int i;
    for (i = 0; i < 5; i++) {
        if (a1[i] != a2[i]) return 0;
    }
    return 1;
}

void PrintIntegerArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

