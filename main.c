#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(int argc, char *argv[])
{
    // the first arg must be the size
    int size, *arr, i, j, *t;
    // convert a string to an integer
    size = atoi(argv[1]);
    arr = (int *)malloc(size * sizeof(int));
    t = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        return -1;
    }
    for (i = 2, j = 0; i < argc, j < size; i++, j++)
    {
        arr[j] = atoi(argv[i]);
    }
    t = Selection_sort(size, arr);
    display_array(t, size);
    free(arr);
    free(t);
    return 0;
}