/*
 * Swap Function Demonstration (Pass by Reference)
 * Shows correct swapping using pointers to modify original variables
 */
#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int i = 3, j = 5;

    printf("Before swap: i = %d, j = %d\n", i, j);
    swap(&i, &j);
    printf("After swap: i and j are %d and %d\n", i, j);

    return 0;
}