/*
 * Weather Application: Temperature Converter
 * Converts between Celsius and Fahrenheit
 *
 * Formulas:
 * Celsius to Fahrenheit: F = (C * 9/5) + 32
 * Fahrenheit to Celsius: C = (F - 32) * 5/9
 */
#include <stdio.h>

int main(void)
{
    float temperature;
    char unit;
    float converted;

    printf("Enter temperature value: ");
    scanf("%f", &temperature);

    printf("Enter unit (C for Celsius, F for Fahrenheit): ");
    scanf(" %c", &unit); // Space before %c to skip whitespace

    if (unit == 'C' || unit == 'c')
    {
        // Convert Celsius to Fahrenheit
        converted = (temperature * 9.0 / 5.0) + 32.0;
        printf("%.2f°C = %.2f°F\n", temperature, converted);
    }
    else if (unit == 'F' || unit == 'f')
    {
        // Convert Fahrenheit to Celsius
        converted = (temperature - 32.0) * 5.0 / 9.0;
        printf("%.2f°F = %.2f°C\n", temperature, converted);
    }
    else
    {
        printf("Error: Invalid unit '%c'. Please use 'C' or 'F'.\n", unit);
        return 1;
    }

    return 0;
}