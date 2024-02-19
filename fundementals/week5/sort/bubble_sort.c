#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int *arr, int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        print_array(arr, size);

        for (j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
            print_array(arr, size);
        }
    }
}

int main()
{
    const int SIZE = 10;
    int nums[SIZE] = {9, 2, 5, 7, 3, 8, 1, 6, 4, 10};
    bubble_sort(nums, SIZE);

    return 0;
}