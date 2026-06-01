#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Problem 2 - Step 1

Design:
- Define a Car structure that stores a model name, manufacturing year, and mileage.
- InputCarInfo returns a Car value after reading user input.
- ShowCarInfo receives a Car value and prints it.
- addMileage receives a Car value, updates its mileage, and returns the updated value.
- isOlderThanYear receives a Car value and checks whether it is older than 2 years.
*/
typedef struct {
    char model[100];
    int year;
    double mileage;
} Car;

Car InputCarInfo(void);
void ShowCarInfo(Car car);
Car addMileage(Car car);
int isOlderThanYear(Car car);

int main(void)
{
    Car car;

    car = InputCarInfo();

    printf("\n=== Car Info ===\n");
    ShowCarInfo(car);

    car = addMileage(car);

    printf("\n=== After Adding Mileage ===\n");
    ShowCarInfo(car);

    if (isOlderThanYear(car)) {
        printf("This car is older than 2 years.\n");
    }
    else {
        printf("This car is not older than 2 years.\n");
    }

    return 0;
}

Car InputCarInfo(void)
{
    Car car;

    printf("Model: ");
    scanf("%99s", car.model);

    printf("Year: ");
    scanf("%d", &car.year);

    printf("Mileage(km): ");
    scanf("%lf", &car.mileage);

    return car;
}

void ShowCarInfo(Car car)
{
    printf("Model: %s, Year: %d, Mileage: %.2f km\n",
        car.model, car.year, car.mileage);
}

Car addMileage(Car car)
{
    double addedMileage;

    printf("Mileage to add: ");
    scanf("%lf", &addedMileage);

    if (addedMileage > 0) {
        car.mileage += addedMileage;
    }

    return car;
}

int isOlderThanYear(Car car)
{
    return 2026 - car.year > 2;
}

