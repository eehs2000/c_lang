#include <stdio.h>

int main()
{
    const int SIZE = 5;
    int grades[SIZE] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptr_to_sum = &sum;
    int i;

    printf("\n My grades are:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", grades[i]);
        sum += grades[i];
    }
    printf("\n\n My average is %.2f\n\n", sum / SIZE);
    printf("sum is at %p, or %lu and is %lf\n", ptr_to_sum, ptr_to_sum, *ptr_to_sum);
    printf("grades are at %lu to %lu\n", grades, grades + 5);
    return 0;
}