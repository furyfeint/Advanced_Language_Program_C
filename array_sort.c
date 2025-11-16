/*
 * Bubble Sort Program
 * Sorts an array in ascending order using bubble sort algorithm
 */
#include <stdio.h>
#define SIZE 7

int main()
{
    int a[SIZE];
    int i, j, n, temp;

    printf("Enter the number of elements (1-%d): ", SIZE);
    scanf("%d", &n);

    if (n < 1 || n > SIZE)
    {
        printf("Error: n must be between 1 and %d\n", SIZE);
        return 1;
    }

    printf("Please input %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    printf("\n");

    // Bubble Sort - n-1 trips in total
    for (i = 0; i < n - 1; i++)
    {
        // Comparing from back to front
        for (j = n - 1; j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                // Swap elements
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    printf("\n");

    return 0;
}