/*
 * Program to find the minimum and maximum of two numbers
 * Compares two integers and determines which is smaller and which is larger
 */
#include <stdio.h>

int main(void)
{
    int min, max;
    int i, j;

    printf("Enter first number (i): ");
    scanf("%d", &i);

    printf("Enter second number (j): ");
    scanf("%d", &j);

    if (i < j)
    {
        min = i;
        max = j;
        printf("i is less than j\n");
    }
    else
    {
        min = j;
        max = i;
        printf("j is less than i\n");
    }

    printf("The minimum value is: %d\n", min);
    printf("The maximum value is: %d\n", max);

    return 0;
}