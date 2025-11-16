/*
 * Array Deletion Program
 * Deletes a value x from an array by shifting elements forward
 */
#include <stdio.h>
#define SIZE 5

int main()
{
    int a[SIZE];
    int i, j, n, x;
    int flag = 1;

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

    printf("\nEnter the value to delete: ");
    scanf("%d", &x);

    // Seek x in the array
    for (i = 0; i < n && a[i] != x; i++)
        ;

    if (i == n)
        flag = 0; // Cannot find
    else
    {
        // Forward covering (shift elements left)
        for (j = i; j < n - 1; j++)
            a[j] = a[j + 1];
        n--; // Decrease array size
    }

    if (flag)
    {
        printf("\nArray after deletion:\n");
        for (i = 0; i < n; i++)
            printf("%5d", a[i]);
        printf("\n");
    }
    else
        printf("Cannot delete x! Element not found.\n");

    return 0;
}