/*
    Circle and Area of Circle
    Written by:  Hansol L
    Date:  2/13/24
*/

#include <stdio.h>

#define PI 3.14159

int main (){
    double area = 0.0, radius = 0.0;
    printf("Enter radius of circle: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}