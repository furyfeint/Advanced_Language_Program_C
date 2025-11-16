/*
 * Three-Digit Number Decomposition
 * Extracts and displays the hundreds, tens, and units digits
 * from a three-digit natural number entered by the user
 */
#include <stdio.h>

int main(void)
{
    int number;
    int hundreds, tens, units;

    printf("Enter a three-digit natural number (100-999): ");
    scanf("%d", &number);

    // Validate input
    if (number < 100 || number > 999)
    {
        printf("Error: Please enter a number between 100 and 999.\n");
        return 1;
    }

    // Extract digits
    hundreds = number / 100;   // Get hundreds digit
    tens = (number / 10) % 10; // Get tens digit
    units = number % 10;       // Get units digit

    // Display results
    printf("\nNumber: %d\n", number);
    printf("Hundreds digit: %d\n", hundreds);
    printf("Tens digit: %d\n", tens);
    printf("Units digit: %d\n", units);

    return 0;
}