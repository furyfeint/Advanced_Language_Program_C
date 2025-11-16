/*
 * Demonstration of compound assignment operators with increment/decrement
 * Shows +=, %=, *= combined with postfix and prefix operators
 */
#include <stdio.h>

int main(void)
{
    int a, b, c;

    a = b = c = 7;
    c += a++;
    printf("a=%d,c=%d\n", a, c);

    c %= ++a;
    printf("a=%d,c=%d\n", a, c);

    c *= a--;
    printf("a=%d,c=%d\n", a, c);

    return 0;
}