/*
 * Grade Evaluation Program using Switch Statement
 * Accepts a numeric grade and assigns a letter grade
 * A: 90+, B: 80-89, C: 70-79, D: 60-69, F: below 60
 */
#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter your numeric grade (0-100): ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100)
    {
        printf("Error: Grade must be between 0 and 100.\n");
        return 1;
    }

    printf("Your letter grade is: ");

    switch (grade / 10)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("F\n");
        break;
    }

    return 0;
}