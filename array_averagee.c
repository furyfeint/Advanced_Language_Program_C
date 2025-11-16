/*
 * Array Average Function Program
 * Defines a function to compute the average value of an array with 10 elements
 */
#include <stdio.h>

// Function to compute the average of an array
double computeAverage(int arr[], int size)
{
    int i;
    int sum = 0;

    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (double)sum / size;
}

int main()
{
    int a[10];
    int i;
    double average;

    printf("Please input 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nThe elements are:\n");
    for (i = 0; i < 10; i++)
        printf("%5d", a[i]);
    printf("\n");

    // Call the function to compute average
    average = computeAverage(a, 10);

    printf("\nThe average value is: %.2f\n", average);

    return 0;
}