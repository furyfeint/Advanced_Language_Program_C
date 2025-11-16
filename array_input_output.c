/*
 * Array Input and Output Program
 * Demonstrates reading and displaying array elements
 */
#include <stdio.h>

int main()
{
    int a[10], i, n;

    do
    {
        printf("Please input n(1<=n<=10):\n");
        scanf("%d", &n);
    } while (n <= 1 || n > 10);

    printf("Please input %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("The elements are:\n");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    printf("\n");

    return 0;
}