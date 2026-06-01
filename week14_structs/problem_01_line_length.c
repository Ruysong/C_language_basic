#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

/*
Problem 1: lineT

Design:
- pointT stores one point in a 2D plane.
- lineT stores one line segment with a start point and an end point.
- InputLine receives the coordinates of one line segment.
- GetLineLength returns the length of the given line segment.
*/

typedef struct {
    double x;
    double y;
} pointT;

typedef struct {
    pointT start;
    pointT end;
} lineT;

lineT InputLine(void);
double GetLineLength(lineT line);

int main(void)
{
    lineT line;
    double length;

    line = InputLine();
    length = GetLineLength(line);

    printf("Line length: %.2f\n", length);

    return 0;
}

lineT InputLine(void)
{
    lineT line;

    printf("Start point x y: ");
    scanf("%lf %lf", &line.start.x, &line.start.y);

    printf("End point x y: ");
    scanf("%lf %lf", &line.end.x, &line.end.y);

    return line;
}

double GetLineLength(lineT line)
{
    double dx = line.end.x - line.start.x;
    double dy = line.end.y - line.start.y;

    return sqrt(dx * dx + dy * dy);
}
