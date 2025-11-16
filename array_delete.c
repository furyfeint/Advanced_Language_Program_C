/*
 * Array Delete Function Program
 * Defines a function to delete a value from an array with 10 elements
 */
#include <stdio.h>

// Function to delete a value from the array
// Returns the new size of the array, or -1 if value not found
int deleteValue(int arr[], int size, int value)
{
    int i, j;
    int found = 0;

    // Search for the value
    for (i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            found = 1;
            // Shift elements left to cover the deleted element
            for (j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            return size - 1; // Return new size
        }
    }

    return -1; // Value not found
}

int main()
{
    int a[10];
    int i, n = 10;
    int valueToDelete, newSize;

    printf("Please input 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nThe elements are:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    printf("\n");

    printf("\nEnter the value to delete: ");
    scanf("%d", &valueToDelete);

    // Call the delete function
    newSize = deleteValue(a, n, valueToDelete);

    if (newSize == -1)
    {
        printf("\nValue %d not found in the array!\n", valueToDelete);
    }
    else
    {
        n = newSize;
        printf("\nArray after deletion:\n");
        for (i = 0; i < n; i++)
            printf("%5d", a[i]);
        printf("\n");
        printf("\nNew array size: %d\n", n);
    }

    return 0;
}