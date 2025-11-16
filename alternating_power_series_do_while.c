/*
 * Alternating Power Series using do-while loops
 * Computes sum = x - x^2/2 + x^3/3 - x^4/4 + ... + x^n/n
 * where x and n are integers entered by the user
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, n;
    int sign = 1;
    double term = 1, i = 1, sum = 0;

    do
    {
        printf("please input the interger x and positive interger n:");
        scanf("%d,%d", &x, &n);
    } while (n < 1);

    do
    {
        term = term * x;
        sum += sign * term / i;
        sign = -sign;
        i++;
    } while (i <= n);

    printf("sum=%f\n", sum);

    return 0;
}