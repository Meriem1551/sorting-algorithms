#include "main.h"
#include <stdio.h>

int *Insertion_sort(int arr_size, int array[])
{
    int i, tmp, j;
    for (i = 1; i < arr_size; i++)
    {
        tmp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > tmp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = tmp;
    }
    return array;
}