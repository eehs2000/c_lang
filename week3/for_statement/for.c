#include <stdio.h>

int main(void){
    int repeat = 0;
    printf("How strong is your love?: ");
    scanf("%d", &repeat);
    
    for (int i = repeat; i > 0; i--){
        printf("\n very!");
    }
    printf(" much! \n\n");
    return 0;
}