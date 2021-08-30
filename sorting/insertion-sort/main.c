#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a[] = {41, 3, 81, 5, 56, 34, 56};   // Array to be sorted.
    size_t n = sizeof a / sizeof a[0];
    
    for (size_t i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[n - 1]);   // Print last element without a space.

    for (size_t i = 1; i < n; i++)
    {
        int k = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > k)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = k;
    }

    for (size_t i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[n - 1]);   // Print last element without a space.

    return EXIT_SUCCESS;
}
