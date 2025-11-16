#include <stdio.h>

int main(void)
{
    int x, sign;

    printf("Please input x:");
    scanf("%d", &x);

    if (x > 0)
        sign = 1;
    else if (x == 0)
        sign = 0;
    else
        sign = -1;

    printf("x=%d, sign=%d\n", x, sign);

    return 0;
}