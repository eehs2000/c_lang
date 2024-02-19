/*
    Write a program that prints the sine function for an input x between (0, 1)
    Written by:  Hansol L
    Date:  Feb/13/24
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double x, result; //x is userinput and result is the sine function
    printf("Enter a value for x between 0 and 1: "); //get user input
    scanf("%lf", &x); //store user input

    result = sin(x); //calculate sine function
    if(x == 0 || x==1){
    printf("The sine of %lf is %lf\n", x, result); //print result

    }
    
    return 0;
}