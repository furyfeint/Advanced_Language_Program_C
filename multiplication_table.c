#include <stdio.h>

int main(void)
{
    int number;
    int i;

    printf("Enter a number between 1 and 10: ");
    scanf("%d", &number);

    if (number < 1 || number > 10)
    {
        printf("Error: Please enter a number between 1 and 10.\n");
        return 1;
    }

    printf("\nMultiplication table for %d:\n", number);
    printf("---------------------------\n");

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}