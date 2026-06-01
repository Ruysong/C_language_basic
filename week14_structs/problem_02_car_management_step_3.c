#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Problem 2 - Step 3

Design:
- Modify InputCarInfo so it returns the address of the initialized structure.
- main stores that returned address in a Car pointer.
- The remaining functions keep using structure pointers.
*/
typedef struct {
    char model[100];
    int year;
    double mileage;
} Car;

Car* InputCarInfo(Car* car);
void ShowCarInfo(const Car* car);
void addMileage(Car* car);
int isOlderThanYear(const Car* car);

int main(void)
{
    Car car;
    Car* carPtr;

    carPtr = InputCarInfo(&car);

    printf("\n=== Car Info ===\n");
    ShowCarInfo(carPtr);

    addMileage(carPtr);

    printf("\n=== After Adding Mileage ===\n");
    ShowCarInfo(carPtr);

    if (isOlderThanYear(carPtr)) {
        printf("This car is older than 2 years.\n");
    }
    else {
        printf("This car is not older than 2 years.\n");
    }

    return 0;
}

Car* InputCarInfo(Car* car)
{
    printf("Model: ");
    scanf("%99s", car->model);

    printf("Year: ");
    scanf("%d", &car->year);

    printf("Mileage(km): ");
    scanf("%lf", &car->mileage);

    return car;
}

void ShowCarInfo(const Car* car)
{
    printf("Model: %s, Year: %d, Mileage: %.2f km\n",
        car->model, car->year, car->mileage);
}

void addMileage(Car* car)
{
    double addedMileage;

    printf("Mileage to add: ");
    scanf("%lf", &addedMileage);

    if (addedMileage > 0) {
        car->mileage += addedMileage;
    }
}

int isOlderThanYear(const Car* car)
{
    return 2026 - car->year > 2;
}

