/*
 * Sum of Natural Numbers
 * Computes 1 + 2 + 3 + ... + n using do-while validation and for loop
 */
#include <stdio.h>

int main()
{
    int i, n, s = 0;

    printf("please input the value for n:");
    do
    {
        scanf("%d", &n);
    } while (n <= 0);

    for (i = 1; i <= n; i++)
        s += i;

    printf("1+2+…+%d is %d.\n", n, s);

    return 0;
}