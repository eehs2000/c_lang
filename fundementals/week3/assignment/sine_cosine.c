/*
    Write a C program that has a function that prints a table of values for sine and cosine between (0, 1). Upload your program as a text file. 
*/

#include <stdio.h>
#include <math.h>

int main() {
    double step = 0.1; // Step size
    double value;

    printf("Value\tSine\t\tCosine\n"); // Header
    for(value = 0.0; value <= 1.0; value += step) {
        printf("%.1lf\t%.4lf\t\t%.4lf\n", value, sin(value), cos(value));
    }
    return 0;
}
