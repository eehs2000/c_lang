/*
    Do I need an umbrella?
    Written by:  Hansol L
    Date:  Feb/14/24
*/

#include <stdio.h>

int main(void){
    int weather;
    printf("What is the weather today? (0 for sunny, 1 for rainy): ");
    scanf("%d", &weather);
    if(weather == 0){
        printf("You don't need an umbrella today\n");
    }
    else if(weather == 1){
        printf("You need an umbrella today\n");
    }
    else{
        printf("sorry, I don't understand that\n");
    }
    return 0;
}