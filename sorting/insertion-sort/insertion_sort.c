#include "insertion_sort.h"

#include <stddef.h>

void insertionSort(int *array, size_t arraySize)
{
    for (size_t i = 1; i < arraySize; i++)
    {
        int k = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > k)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = k;
    }
}
