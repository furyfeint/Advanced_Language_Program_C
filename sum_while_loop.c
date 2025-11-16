/*
 * Sum computation using while loop
 * Computes sum = 1 + 2 + 3 + ... + n
 */
#include <stdio.h>

int compute_sum(int n)
{
    int i = 1, sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    return sum;
}

int main(void)
{
    int n, result;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Error: n must be a positive integer.\n");
        return 1;
    }

    result = compute_sum(n);

    printf("Sum of 1 to %d = %d\n", n, result);

    return 0;
}