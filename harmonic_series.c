/*
 * Alternating Harmonic Series
 * Computes s = 1 - 1/2 + 1/3 - 1/4 + ... + 1/n
 * where n is an integer entered by the user
 */
#include <stdio.h>

int main(void)
{
    int n, i;
    double s = 0.0;
    int sign = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Error: n must be a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        s += sign * (1.0 / i);
        sign = -sign; // Alternate the sign
    }

    printf("s = 1 - 1/2 + 1/3 - 1/4 + ... + 1/%d = %.6f\n", n, s);

    return 0;
}