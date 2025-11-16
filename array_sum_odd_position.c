/*
 * Array Sum at Odd Positions
 * Computes the sum of elements at odd positions (index 1, 3, 5, 7, 9)
 */
#include <stdio.h>

int main()
{
    int a[10];
    int i, sum = 0;

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

    // Calculate sum of elements at odd positions (index 1, 3, 5, 7, 9)
    printf("\nElements at odd positions:\n");
    for (i = 1; i < 10; i += 2)
    {
        printf("a[%d] = %d\n", i, a[i]);
        sum += a[i];
    }

    printf("\nSum of elements at odd positions: %d\n", sum);

    return 0;
}