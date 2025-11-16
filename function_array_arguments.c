/*
 * Functions with Array Arguments
 * Demonstrates passing an array to a function using pointer parameter
 */
#include <stdio.h>

int Sum(int *pa, int n)
{
    int i, t = 0;
    for (i = 0; i < n; i++)
        t = t + pa[i];
    return (t);
}

int main()
{
    int a[6] = {10, 11, 12, 13, 14, 15}, i, s = 0;

    printf("Array elements: ");
    for (i = 0; i < 6; i++)
        printf("%d ", a[i]);
    printf("\n");

    s = Sum(a, 6);
    printf("sum=%d\n", s);

    return 0;
}