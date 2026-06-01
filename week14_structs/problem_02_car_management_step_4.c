#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Problem 2 - Step 4

Design:
- Manage up to five Car structures in one array.
- InputCarsInfo fills the array with user-provided car information.
- ShowCarsInfo prints every car in the array.
- The unit functions from the previous steps are reused for each car.
*/
typedef struct {
    char model[100];
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
    Car cars[5];
    int count;
    int index;

    count = InputCarsInfo(cars, 5);

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

int isOlderThanYear(const Car* car, int years)
{
    return 2026 - car->year > years;
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

