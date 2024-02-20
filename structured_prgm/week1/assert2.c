/*
    use asserts within a trivial program
    Hansol Lee
    Feb, 20, 2024
*/

#define NDEBUG // goes before <assert.h>
#include <stdio.h>
#include <assert.h>
#include <ctype.h>

int main()
{
    assert(0);
    printf("My program runs\n");
    return 0;
}