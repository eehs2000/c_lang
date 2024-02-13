/* 
    Read in Tree Floats and Print Sum
    Written by:  Hansol L
    Date:  2/13/24
*/

#include <stdio.h>

int main(void){
    float num1, num2, num3, sum;

    printf("Enter three floats: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    printf("The sum of the three floats is: %.2f\n", sum);

    return 0;
}
