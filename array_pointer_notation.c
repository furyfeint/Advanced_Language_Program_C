/*
 * Array with Pointer Notation
 * Demonstrates using pointer notation to access array elements
 */
#include <stdio.h>

int main()
{
    int a[10];
    int i;

    printf("Please input 10 elements:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", a + i);

    printf("The elements are:\n");
    for (i = 0; i < 10; i++)
        printf("%5d", *(a + i));

    printf("\n");

    return 0;
}