/*
 * This program prints a list of
 * integers, from 0 to 9.
 */
#include <stdio.h>
int main(void)
{
    int i;
    for (i = 0; i < 10; i = i + 1)
        printf("i is %d\n", i);
    return 0;
}