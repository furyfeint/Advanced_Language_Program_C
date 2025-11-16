/*
 * Grade Evaluation Program
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

    if (grade >= 90)
        printf("A\n");
    else if (grade >= 80)
        printf("B\n");
    else if (grade >= 70)
        printf("C\n");
    else if (grade >= 60)
        printf("D\n");
    else
        printf("F\n");

    return 0;
}