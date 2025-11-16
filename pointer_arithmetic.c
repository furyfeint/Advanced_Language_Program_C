/*
 * Pointer Arithmetic Demonstration
 * Shows pointer dereferencing with integer and character operations
 */
#include <stdio.h>

int main()
{
    int i = 2, *p = &i;
    char j = 'B', *q = &j;

    printf("Initial values: i = %d, j = %c\n", i, j);
    printf("ASCII value of 'B' = %d\n\n", j);

    *p += *q;
    printf("After *p += *q:\n");
    printf("i = %d (was 2, added ASCII of 'B' which is 66)\n", i);
    printf("j = %c (unchanged)\n\n", j);

    *q += 32;
    printf("After *q += 32:\n");
    printf("i = %d, j = %c\n", i, j);
    printf("(Adding 32 to uppercase 'B' gives lowercase 'b')\n");

    return 0;
}