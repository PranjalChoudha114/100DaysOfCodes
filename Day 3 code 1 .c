#include <stdio.h>

int main() {
    // Q5: Write a program to convert temperature from Celsius to Fahrenheit.

    float celsius, fahrenheit;

    // Input temperature in Celsius
    scanf("%f", &celsius);

    // Formula: Fahrenheit = (Celsius × 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display temperature in Fahrenheit
    printf("Fahrenheit=%.0f", fahrenheit);

    return 0;
}

/*
Sample Test Cases:

Input 1:
0

Output 1:
Fahrenheit=32

Input 2:
100

Output 2:
Fahrenheit=212
*/