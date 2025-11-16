/*
 * Alternating Harmonic Series using do-while loops
 * Computes sum = 1 - 1/2 + 1/3 - 1/4 + ... + 1/n
 * where n is a positive integer entered by the user
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int sign = 1;
    double i = 1, sum = 0;

    do
    {
        printf("please input the positive interger n:");
        scanf("%d", &n);
    } while (n < 1);

    do
    {
        sum += sign * 1 / i;
        sign = -sign;
        i++;
    } while (i <= n);

    printf("sum=%f\n", sum);

    return 0;
}