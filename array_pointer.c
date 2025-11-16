/*
 * Array Pointer Demonstration
 * Shows that array name and &array[0] both point to the first element
 */
#include <stdio.h>

int main(void)
{
    int array[8] = {2, 4, 6, 8, 10, 12, 14, 16};
    int *p1, *p2;

    p1 = array;
    p2 = &array[0];

    printf("%d %d\n", *p1, *p2);

    return 0;
}