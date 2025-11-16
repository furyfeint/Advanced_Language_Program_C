/*
 * Array Max and Min Finder
 * Uses functions to find maximum and minimum values in an array
 */
#include <stdio.h>

void enterArray(int *arr, int size)
{
    int i;
    printf("Please enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int size)
{
    int i;
    printf("\nThe array elements are:\n");
    for (i = 0; i < size; i++)
        printf("%5d", arr[i]);
    printf("\n");
}

int findMax(int *arr, int size)
{
    int i, max = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int findMin(int *arr, int size)
{
    int i, min = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int a[10];
    int size, max, min;

    printf("Enter the number of elements (1-10): ");
    scanf("%d", &size);

    if (size < 1 || size > 10)
    {
        printf("Error: Size must be between 1 and 10.\n");
        return 1;
    }

    enterArray(a, size);
    displayArray(a, size);

    max = findMax(a, size);
    min = findMin(a, size);

    printf("\nResults:\n");
    printf("--------\n");
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}