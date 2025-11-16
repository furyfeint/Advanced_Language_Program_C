/*
 * Average Function Demonstration
 * Computes the average of two integers
 */
#include <stdio.h>

int Average(int x, int y)
{
    int result;
    result = (x + y) / 2;
    return result;
}

int main()
{
    int a = 3, b = 4, s;
    s = Average(a, b);
    printf("The average is %d", s);
    return 0;
}