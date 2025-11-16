/*
 * Star Pattern Pyramid
 * Prints a pyramid pattern with asterisks
 */
#include <stdio.h>

int main(void)
{
    int i, j, spaces;
    int rows = 5;

    for (i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (spaces = 1; spaces <= rows - i; spaces++)
        {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}