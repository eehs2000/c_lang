/*

*/

#include <stdio.h>

int main(void){
    int speed;
    printf("Enter the speed of the car: ");
    scanf("%d", &speed);

    if(speed > 60){
        printf("You are speeding\n");
        printf("here is your ticket\n");
    }
    else{
        printf("You are not speeding\n");
    }
}