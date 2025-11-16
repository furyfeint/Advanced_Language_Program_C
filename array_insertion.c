/*
 * Array Insertion in Sorted Order
 * Inserts a value x into a sorted array while maintaining order
 */
#include <stdio.h>
#define SIZE 7

int main()
{
    int a[SIZE + 1]; // Extra space for insertion
    int i, j, n, x;

    printf("Enter the number of elements (1-%d): ", SIZE);
    scanf("%d", &n);

    if (n < 1 || n > SIZE)
    {
        printf("Error: n must be between 1 and %d\n", SIZE);
        return 1;
    }

    printf("Please input %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    printf("\n");

    printf("\nEnter the value to insert: ");
    scanf("%d", &x);

    // Find the position to insert
    for (i = 0; i < n && a[i] < x; i++)
        ;

    // Shift elements backward to make space
    for (j = n - 1; j >= i; j--)
        a[j + 1] = a[j];

    // Insert the new element
    a[i] = x;
    n++; // Increase array size

    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    printf("\n");

    return 0;
}