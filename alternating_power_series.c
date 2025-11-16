/*
 * Alternating Power Series
 * Computes s = x - x^2/2 + x^3/3 - x^4/4 + ... + x^n/n
 * where x and n are integers entered by the user
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, n, i;
    double s = 0.0;
    double term;
    int sign = 1;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Error: n must be a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        term = pow(x, i) / i;
        s += sign * term;
        sign = -sign; // Alternate the sign
    }

    printf("s = x - x^2/2 + x^3/3 - x^4/4 + ... + x^%d/%d = %.6f\n", n, n, s);

    return 0;
}