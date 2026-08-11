#include <stdio.h>

int main() {
    // Q4: Write a program to calculate the area and
    // circumference of a circle given its radius.

    float radius, area, circumference;
    float pi = 3.14;

    // Input the radius of the circle
    scanf("%f", &radius);

    // Calculate area of circle
    // Area = π × r × r
    area = pi * radius * radius;

    // Calculate circumference of circle
    // Circumference = 2 × π × r
    circumference = 2 * pi * radius;

    // Display the area and circumference
    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
} 