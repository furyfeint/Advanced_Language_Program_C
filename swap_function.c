/*
 * Swap Function Demonstration (Pass by Value)
 * Shows that swapping using pass by value doesn't affect original variables
 */
#include <stdio.h>

void Swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("Inside Swap: a = %d, b = %d\n", a, b);
}

int main()
{
    int i = 3, j = 5;

    printf("Before swap: i = %d, j = %d\n", i, j);
    Swap(i, j);
    printf("After swap: i = %d, j = %d\n", i, j);

    return 0;
}