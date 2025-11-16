/*
 * Demonstration of relational operators
 * Shows how > and < operators work and their evaluation order
 */
#include <stdio.h>

int main(void)
{
    int a = 3, b = 2, c = 1;

    printf("a=%d, b=%d, c=%d\n\n", a, b, c);

    // Simple comparisons
    printf("a > b = %d\n", a > b); // 3 > 2 = 1 (true)
    printf("a < c = %d\n", a < c); // 3 < 1 = 0 (false)

    // Chained comparison (left to right evaluation)
    printf("a > b > c = %d\n", a > b > c); // (3 > 2) > 1 = 1 > 1 = 0 (false)

    return 0;
}