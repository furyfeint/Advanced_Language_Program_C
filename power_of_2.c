/*
 * Powers of 2 demonstration using a loop
 * Calculates and displays powers of 2 from 2^0 to 2^10
 */
#include <stdio.h>

int main(void)
{
    int i;
    int power = 1;

    printf("2 to the %d power is %d\n", i, power);

    for (i = 0; i < 10; ++i)
    {
        power *= 2;
        printf("2 to the %d power is %d\n", i, power);
    }

    return 0;
}