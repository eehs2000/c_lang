#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int *arr, int *arr_merge, int left, int mid, int right)
{
    int index1 = left;
    int index2 = mid + 1;
    int index3 = left;

    for (int i = left; i <= right; i++)
    {
        arr_merge[i] = arr[i];
    }
    while (index1 <= mid && index2 <= right)
    {
        if (arr_merge[index1] <= arr_merge[index2])
        {
            arr[index3++] = arr_merge[index1++];
        }
        else
        {
            arr[index3++] = arr_merge[index2++];
        }
    }

    while (index1 <= mid)
    {
        arr[index3++] = arr_merge[index1++];
    }
    while (index2 <= right)
    {
        arr[index3++] = arr_merge[index2++];
    }
}

void merge_sort_util(int *arr, int *arr_merge, int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        merge_sort_util(arr, arr_merge, left, mid);
        merge_sort_util(arr, arr_merge, mid + 1, right);
        merge(arr, arr_merge, left, mid, right);
    }
}

void merge_sort(int *arr, int size)
{
    int *arr_merge = (int *)malloc(size * sizeof(int));
    merge_sort_util(arr, arr_merge, 0, size - 1);
    print_array(arr, size);
    free(arr_merge);
}

int main()
{
    const int SIZE = 10;
    int nums[SIZE] = {9, 9, 7, 13, 22, 3, 2, 99, 84, 10};
    merge_sort(nums, SIZE);
}