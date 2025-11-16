/*
 * Mutual Recursion Demonstration
 * Functions A and B call each other recursively
 * Based on random condition
 */
#include <stdio.h>
#include <stdlib.h>

void A(void);
void B(void);

void main(void)
{
    A();
}

void A(void)
{
    putchar('A');
    B();
}

void B(void)
{
    putchar('B');
    if (rand() % 2 == 1)
        A();
}