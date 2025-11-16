/*
 * Pointer Sum Calculation Program
 * Demonstrates pointer usage to read values and calculate sum
 * Input: 3 integers
 * Output: Sum of the 3 integers plus initial value of 10
 */
#include <stdio.h>

int main()
{
    int a = 0, i, *p, sum = 10;

    printf("Enter 3 integers:\n");

    for (i = 0; i <= 2; i++)
    {
        p = &a;
        scanf("%d", p);
        sum += *p;
    }

    printf("sum=%d\n", sum);

    return 0;
}