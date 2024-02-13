/*
    Fundamentals of types
    Written by:  Hansol L
    Date:  Feb/13/24
*/

#include <stdio.h>

int main(void){
    int a=5, b=7, c=6; 
    double average = 0.0;
    char ch='e';

    printf("on my system\n");
    printf("int is %lu bytes\n", sizeof(long int));
    printf("char is %lu bytes\n", sizeof(ch));
    printf("float is %lu bytes\n", sizeof(float));
    printf("double is %lu bytes\n", sizeof(double));
    printf("long double is %lu bytes\n", sizeof(long double));

    return 0;
}