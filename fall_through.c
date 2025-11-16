/*
 * Switch statement fall-through demonstration
 * Shows how case statements execute without break
 */
#include <stdio.h>

int main(void)
{
    int I = 10;

    printf("Initial value: I = %d\n", I);

    switch (I)
    {
    case 9:
        I++;
    case 10:
        I++;
    case 11:
        I++;
        break;
    default:
        I++;
    }

    printf("Final value: I = %d\n", I);

    return 0;
}