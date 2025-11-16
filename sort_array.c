/*
 * Array Sort Function Program
 * Uses functions to input, display, and sort array elements
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
    for (i = 0; i < size; i++)
        printf("%5d", arr[i]);
    printf("\n");
}

void sortArray(int *arr, int size)
{
    int i, j, temp;

    // Bubble sort - smallest to largest
    for (i = 0; i < size - 1; i++)
    {
        for (j = size - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                // Swap elements
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int a[10];
    int size;

    printf("Enter the number of elements (1-10): ");
    scanf("%d", &size);

    if (size < 1 || size > 10)
    {
        printf("Error: Size must be between 1 and 10.\n");
        return 1;
    }

    enterArray(a, size);

    printf("\nOriginal array:\n");
    displayArray(a, size);

    sortArray(a, size);

    printf("\nSorted array (smallest to largest):\n");
    displayArray(a, size);

    return 0;
}