#include "main.h"
#include <stdio.h>

int *Bubble_sort(int arr_size, int array[])
{
    int i, tmp;
    while (arr_size >= 0)
    {
        for (i = 0; i < arr_size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
            }
        }
        arr_size--;
    }
    return array;
}