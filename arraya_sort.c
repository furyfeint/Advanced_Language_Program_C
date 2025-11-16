/*
 * Array Sort Function Program
 * Defines a function to sort an array with 10 elements using bubble sort
 */
#include <stdio.h>

// Function to sort the array in ascending order using bubble sort
void sortArray(int arr[], int size)
{
    int i, j, temp;

    // Bubble sort algorithm
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
    int i;

    printf("Please input 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array:\n");
    for (i = 0; i < 10; i++)
        printf("%5d", a[i]);
    printf("\n");

    // Call the sort function
    sortArray(a, 10);

    printf("\nSorted array (ascending order):\n");
    for (i = 0; i < 10; i++)
        printf("%5d", a[i]);
    printf("\n");

    return 0;
}