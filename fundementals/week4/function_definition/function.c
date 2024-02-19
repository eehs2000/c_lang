#include <stdio.h>

void write_very(int repeat){
    for (int i = repeat; i > 0; i--){
        printf("\n very!");
    }
    printf(" much! \n\n");
}

int main(void){
    int repeat = 0;
    printf("How strong is your love?: ");
    scanf("%d", &repeat);
    printf("I love you!");
    write_very(repeat);
    return 0;
}