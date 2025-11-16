/*
 * Array Statistics Program
 * Finds average, maximum, and minimum values in an array of 6 elements
 */
#include <stdio.h>

int main()
{
    int a[6], i;
    int sum = 0, max, min;
    double average;

    printf("Please input 6 elements:\n");
    for (i = 0; i < 6; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Initialize max and min with first element
    max = min = a[0];

    // Calculate sum and find max/min
    for (i = 0; i < 6; i++)
    {
        sum += a[i];

        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    // Calculate average
    average = sum / 6.0;

    // Display results
    printf("\nThe elements are:\n");
    for (i = 0; i < 6; i++)
        printf("%5d", a[i]);
    printf("\n\n");

    printf("Results:\n");
    printf("--------\n");
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}