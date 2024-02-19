#include <stdio.h> 

int main(void){
    int repeat = 0;
    printf("How strong is your love 1-10?: ");
    scanf("%d", &repeat);
    
     while(repeat < 1 || repeat > 10) {
        printf("Invalid input. Please enter a number between 1 and 10: ");
        scanf("%d", &repeat);
    }
    printf("I love you!");
    while (repeat > 0){
        printf("\n very!");
        repeat--;
    }
    printf(" much! \n\n");
    return 0;
}