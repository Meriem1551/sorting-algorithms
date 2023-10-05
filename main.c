#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "../Search-algorithms/main.h"
int main(int argc, char *argv[])
{
    // the first arg must be the size
    int size, *arr, i, j, *t, choice;
    size = atoi(argv[1]); // convert a string to an integer
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
    choice = get_input("Enter 1 for selection sort\n Enter 2 for bubble sort\n Enter 3 for insertion sort");
    if (choice == 1)
        t = Selection_sort(size, arr);
    else
    {
        if (choice == 2)
            t = Bubble_sort(size, arr);
        else
            t = Insertion_sort(size, arr);
    }
    display_array(t, size);
    free(arr);
    free(t);
    return 0;
}