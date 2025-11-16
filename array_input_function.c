/*
 * Array Input Function Program
 * Defines a function to enter array element values from keyboard
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

int main()
{
    int a[10];

    enterArray(a, 10);
    displayArray(a, 10);

    return 0;
}