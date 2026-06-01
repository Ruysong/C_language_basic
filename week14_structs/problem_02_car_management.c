#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_MODEL_LENGTH 100
#define MAX_CARS 5
#define CURRENT_YEAR 2026

/*
Problem 2: Car information management

Design:
- Car stores a model name, manufacturing year, and total mileage.
- InputCarInfo fills one Car structure and returns its address.
- ShowCarInfo prints one Car structure.
- addMileage increases the mileage of one Car by a user-provided value.
- isOlderThanYear checks whether a Car is older than a given number of years.
- InputCarsInfo and ShowCarsInfo manage an array of up to five cars.
*/

typedef struct {
    char model[MAX_MODEL_LENGTH];
    int year;
    double mileage;
} Car;

Car* InputCarInfo(Car* car);
void ShowCarInfo(const Car* car);
void addMileage(Car* car);
int isOlderThanYear(const Car* car, int years);
int InputCarsInfo(Car cars[], int maxSize);
void ShowCarsInfo(const Car cars[], int size);

int main(void)
{
    Car cars[MAX_CARS];
    int count;
    int index;

    count = InputCarsInfo(cars, MAX_CARS);

    printf("\n=== All Cars ===\n");
    ShowCarsInfo(cars, count);

    if (count > 0) {
        printf("\nSelect a car to add mileage (1-%d): ", count);
        scanf("%d", &index);

        if (index >= 1 && index <= count) {
            addMileage(&cars[index - 1]);
            ShowCarInfo(&cars[index - 1]);

            if (isOlderThanYear(&cars[index - 1], 2)) {
                printf("This car is older than 2 years.\n");
            }
            else {
                printf("This car is not older than 2 years.\n");
            }
        }
    }

    return 0;
}

Car* InputCarInfo(Car* car)
{
    if (car == NULL) {
        return NULL;
    }

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
    if (car == NULL) {
        return;
    }

    printf("Model: %s, Year: %d, Mileage: %.2f km\n",
        car->model, car->year, car->mileage);
}

void addMileage(Car* car)
{
    double addedMileage;

    if (car == NULL) {
        return;
    }

    printf("Mileage to add: ");
    scanf("%lf", &addedMileage);

    if (addedMileage > 0) {
        car->mileage += addedMileage;
    }
}

int isOlderThanYear(const Car* car, int years)
{
    if (car == NULL) {
        return 0;
    }

    return CURRENT_YEAR - car->year > years;
}

int InputCarsInfo(Car cars[], int maxSize)
{
    int count;
    int i;

    printf("Number of cars (1-%d): ", maxSize);
    scanf("%d", &count);

    if (count < 1) {
        count = 1;
    }
    else if (count > maxSize) {
        count = maxSize;
    }

    for (i = 0; i < count; i++) {
        printf("\nCar #%d\n", i + 1);
        InputCarInfo(&cars[i]);
    }

    return count;
}

void ShowCarsInfo(const Car cars[], int size)
{
    int i;

    for (i = 0; i < size; i++) {
        printf("[%d] ", i + 1);
        ShowCarInfo(&cars[i]);
    }
}
