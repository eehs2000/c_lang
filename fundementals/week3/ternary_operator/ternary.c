#include <stdio.h>

int main(void){
    int speed;
    printf("Enter your speed of you driving: ");
    scanf("%d", &speed);
    speed = (speed <= 65) ? (65) : (speed <= 70)? (70) : (90);
    switch (speed)
    {
        case 65: printf("No ticket\n");break;
        case 70: printf("I will let you go\n");break;
        case 90: printf("Here is your speeding ticket\n");break;
    }
    return 0;
}