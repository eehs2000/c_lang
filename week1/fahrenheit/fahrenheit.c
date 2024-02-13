/*
    convert fahrenheit to celsius
    Written by:  Hansol L
    Date:  2/13/24
*/

#include <stdio.h>

int main(void){
    int fahrenheit, celsius;
    printf("Enter temperature in fahrenheit: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("\n %d fahrenheit is %d celsius.\n", fahrenheit, celsius);
    return 0;
}