#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Problem 1: FindMaxPos

Design:
- main prepares an integer array and a pointer variable maxPointer.
- FindMaxPos receives an array of arbitrary length.
- It finds the element with the maximum value.
- It stores the address of that element through a double-pointer parameter.
- main uses the returned address to read and update the maximum element.
*/

void FindMaxPos(int a[], int size, int** maxPtr);
void PrintIntegerArray(int a[], int size);

int main(void)
{
    int nums[] = { 7, 3, 9, 1, 4, 6 };
    int size = sizeof(nums) / sizeof(nums[0]);
    int* maxPointer = NULL;

    PrintIntegerArray(nums, size);

    FindMaxPos(nums, size, &maxPointer);

    if (maxPointer != NULL) {
        printf("Maximum value: %d\n", *maxPointer);
        printf("Maximum index: %d\n", (int)(maxPointer - nums));

        *maxPointer = 10;
        PrintIntegerArray(nums, size);
    }

    return 0;
}

void FindMaxPos(int a[], int size, int** maxPtr)
{
    int i;
    int* currentMax;

    if (a == NULL || size <= 0 || maxPtr == NULL) {
        return;
    }

    currentMax = &a[0];

    for (i = 1; i < size; i++) {
        if (a[i] > *currentMax) {
            currentMax = &a[i];
        }
    }

    *maxPtr = currentMax;
}

void PrintIntegerArray(int a[], int size)
{
    int i;

    printf("Array: ");

    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
}
