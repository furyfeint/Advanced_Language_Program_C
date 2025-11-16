/*
 * Loop demonstration with decrement operators
 * Shows behavior of x--, --x with continue statement
 */
#include <stdio.h>

int main(void)
{
    int x = 8;

    for (; x > 0; x--)
    {
        if (x % 3)
        {
            printf("%d, ", x--);
            continue;
        }
        printf("%d, ", --x);
    }

    return 0;
}