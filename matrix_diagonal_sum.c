/*
 * Matrix Diagonal Sum Program
 * Computes the sum of diagonal elements in a 3x3 matrix
 */
#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    printf("Enter a 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate main diagonal sum (top-left to bottom-right)
    for (i = 0; i < 3; i++)
    {
        mainDiagonalSum += matrix[i][i];
    }

    // Calculate secondary diagonal sum (top-right to bottom-left)
    for (i = 0; i < 3; i++)
    {
        secondaryDiagonalSum += matrix[i][2 - i];
    }

    printf("\nResults:\n");
    printf("Main diagonal sum (top-left to bottom-right): %d\n", mainDiagonalSum);
    printf("Secondary diagonal sum (top-right to bottom-left): %d\n", secondaryDiagonalSum);
    printf("Total diagonal sum: %d\n", mainDiagonalSum + secondaryDiagonalSum);

    return 0;
}