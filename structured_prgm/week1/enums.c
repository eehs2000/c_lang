/*
    Enumerated Types
    Hansol Lee
    Feb, 19, 2024
*/

#include <stdio.h>

enum day
{
    sun, // 0
    mon, // 1
    tue, // 2
    wed, // 3
    thu, // 4
    fri, // 5
    sat  // 6
};       // declare types

void print_day(enum day d)
{
    switch (d)
    {
    case sun:
        printf("Sunday\n");
        break;
    case mon:
        printf("Monday\n");
        break;
    case tue:
        printf("Tuesday\n");
        break;
    case wed:
        printf("Wednesday\n");
        break;
    case thu:
        printf("Thursday\n");
        break;
    case fri:
        printf("Friday\n");
        break;
    case sat:
        printf("Saturday\n");
        break;
    default:
        printf("Invalid day\n");
    }
}

enum day next_day(enum day d)
{
    return (d + 1) % 7;
}

int main()
{
    enum day today = fri;
    print_day(today);
    print_day(next_day(today));
    print_day(0);
    print_day(next_day(7));

    return 0;
}