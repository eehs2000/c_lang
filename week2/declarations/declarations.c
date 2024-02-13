/*
    Fundamentals of C declarations
    Written by:  Hansol L
    Date:  Feb/13/24
*/

#include <stdio.h>

int main(void){
    int a = 5, b = 7, c = 6; //initialize
    double average = 0.0;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    average = (a + b + c) / 3.0;
    printf("The average of a, b, and c is: %.2f\n", average);
    return 0;
}