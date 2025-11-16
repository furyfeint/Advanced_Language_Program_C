/*
 * Pointer Manipulation Demonstration
 * Shows how pointers can change values of different variables
 */
#include <stdio.h>

int main()
{
    int i = 42;
    int j = 17;
    int *ptr = &i;

    printf("Initial values:\n");
    printf("i = %d, j = %d\n", i, j);
    printf("ptr points to i (address: %p)\n\n", (void *)ptr);

    *ptr = 1;
    printf("After *ptr = 1:\n");
    printf("i = %d, j = %d\n", i, j);
    printf("(ptr still points to i)\n\n");

    ptr = &j;
    printf("After ptr = &j:\n");
    printf("i = %d, j = %d\n", i, j);
    printf("ptr now points to j (address: %p)\n\n", (void *)ptr);

    *ptr = 2;
    printf("After *ptr = 2:\n");
    printf("i = %d, j = %d\n", i, j);
    printf("(ptr points to j, so j is modified)\n\n");

    printf("Final values:\n");
    printf("i = %d, j = %d\n", i, j);

    return 0;
}