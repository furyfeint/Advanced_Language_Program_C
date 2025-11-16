/*
 * Pointer Assignment Demonstration
 * Shows pointer dereferencing and value assignment
 */
#include <stdio.h>

int main()
{
    int a = 3, b = 5;
    int *p = &a, *q = &b;

    printf("Initial values: a = %d, b = %d\n", a, b);
    printf("p points to a, q points to b\n\n");

    *p = b;
    printf("After *p = b:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("(a is now 5, because *p modifies a)\n\n");

    a = *q;
    printf("After a = *q:\n");
    printf("a = %d, b = %d\n", a, b);
    printf("(a is still 5, because *q equals b which is 5)\n");

    return 0;
}