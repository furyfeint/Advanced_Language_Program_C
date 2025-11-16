/*
 * Array Search Program
 * Searches for a value x in an array and returns its position
 */
#include <stdio.h>
#define SIZE 10

int main()
{
    int a[SIZE];
    int i, n, x;

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

    printf("\nEnter the value to search for: ");
    scanf("%d", &x);

    // Search for x in the array
    i = 0;
    while (i < n)
    {
        if (x == a[i])
            break;
        i++;
    }

    if (i < n)
        printf("Found at position = %d\n", i);
    else
        printf("Not present!\n");

    return 0;
}