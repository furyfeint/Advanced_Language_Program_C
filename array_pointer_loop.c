/*
 * Array with Pointer Loop
 * Demonstrates using pointer variable to traverse array
 */
#include <stdio.h>

int main()
{
    int a[10];
    int i, *p;

    printf("Please input 10 elements:\n");
    for (p = a; p < (a + 10); p++)
        scanf("%d", p);

    printf("The elements are:\n");
    for (p = a; p < (a + 10); p++)
        printf("%5d", *p);

    printf("\n");

    return 0;
}