#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Problem 2 - Step 2

Design:
- Modify the Step 1 functions to receive structure pointers.
- InputCarInfo stores user input directly in the structure pointed to by car.
- ShowCarInfo receives a const structure pointer and prints it.
- addMileage receives a structure pointer and updates the original mileage.
- isOlderThanYear receives a const structure pointer and checks whether it is older than 2 years.
*/
typedef struct {
    char model[100];
    int year;
    double mileage;
} Car;

void InputCarInfo(Car* car);
void ShowCarInfo(const Car* car);
void addMileage(Car* car);
int isOlderThanYear(const Car* car);

int main(void)
{
    Car car;

    InputCarInfo(&car);

    printf("\n=== Car Info ===\n");
    ShowCarInfo(&car);

    addMileage(&car);

    printf("\n=== After Adding Mileage ===\n");
    ShowCarInfo(&car);

    if (isOlderThanYear(&car)) {
        printf("This car is older than 2 years.\n");
    }
    else {
        printf("This car is not older than 2 years.\n");
    }

    return 0;
}

void InputCarInfo(Car* car)
{
    printf("Model: ");
    scanf("%99s", car->model);

    printf("Year: ");
    scanf("%d", &car->year);

    printf("Mileage(km): ");
    scanf("%lf", &car->mileage);
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

