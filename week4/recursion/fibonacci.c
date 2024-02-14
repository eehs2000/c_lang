#include <stdio.h>


long recursive_fibonacci(int n ){
    if(n <=1){
        return n;
    }else{
        return recursive_fibonacci(n-1) + recursive_fibonacci(n-2);
    }
}


int main(){
    int how_many = 0, i;
    printf("I want table of fibonacci up to n: ");
    scanf("%d", &how_many);

    for(i = 0; i<= how_many; i++){
        printf("\n%d\t %ld\n", i, recursive_fibonacci(i));
    }
    return 0;
}