/*
 * Ellipse Area Calculator
 * Function: Calculate the geometric area of an ellipse
 * Parameters: Major axis (a) and minor axis (b)
 * Return value: Area of the ellipse
 * Formula: Area = π × a × b
 */
#include <stdio.h>

#define PI 3.14159265359

// Function to calculate the area of an ellipse
// Parameters: a (major axis), b (minor axis)
// Returns: area of the ellipse
double calculateEllipseArea(double a, double b)
{
    double area;
    area = PI * a * b;
    return area;
}

int main(void)
{
    double majorAxis, minorAxis, area;

    printf("Ellipse Area Calculator\n");
    printf("=======================\n\n");

    printf("Enter the major axis (a): ");
    scanf("%lf", &majorAxis);

    printf("Enter the minor axis (b): ");
    scanf("%lf", &minorAxis);

    // Validate input
    if (majorAxis <= 0 || minorAxis <= 0)
    {
        printf("Error: Both axes must be positive values.\n");
        return 1;
    }

    // Calculate area using the function
    area = calculateEllipseArea(majorAxis, minorAxis);

    printf("\nResults:\n");
    printf("--------\n");
    printf("Major axis (a) = %.2f\n", majorAxis);
    printf("Minor axis (b) = %.2f\n", minorAxis);
    printf("Area of ellipse = %.2f square units\n", area);

    return 0;
}