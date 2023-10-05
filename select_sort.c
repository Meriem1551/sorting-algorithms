#include "main.h"
#include <stdio.h>
int *Selection_sort(int arr_size, int array[])
{
    int i, j, ind_min, tmp;
    for (i = 0; i < arr_size; i++)
    {
        ind_min = i;
        for (j = i + 1; j < arr_size; j++)
        {
            if (array[j] < array[ind_min])
                ind_min = j;
        }
        tmp = array[i];
        array[i] = array[ind_min];
        array[ind_min] = tmp;
    }
    return array;
}