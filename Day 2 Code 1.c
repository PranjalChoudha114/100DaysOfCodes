#include <stdio.h>

int main() {
    // Q3: Write a program to calculate the area and perimeter
    // of a rectangle given its length and breadth.

    int length, breadth;
    int area, perimeter;

    // Input length and breadth of the rectangle
    scanf("%d %d", &length, &breadth);

    // Calculate area of rectangle
    // Area = Length × Breadth
    area = length * breadth;

    // Calculate perimeter of rectangle
    // Perimeter = 2 × (Length + Breadth)
    perimeter = 2 * (length + breadth);

    // Display the area and perimeter
    printf("Area=%d, Perimeter=%d", area, perimeter);

    return 0;
}