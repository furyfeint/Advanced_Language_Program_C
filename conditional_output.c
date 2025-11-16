/*
 * Conditional output program
 * Input x and output y based on conditions:
 * y = x + 100 (when x < 20)
 * y = x (when 20 <= x <= 100)
 * y = x - 100 (when x > 100)
 */
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);

    if (x < 20)
        y = x + 100;
    else if (x <= 100)
        y = x;
    else
        y = x - 100;

    printf("x = %d, y = %d\n", x, y);

    return 0;
}