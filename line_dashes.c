/*
 * Function to draw a line of dashes
 * Draws 30 '-' characters on the screen
 */
#include <stdio.h>

void drawLine(void)
{
    int i;
    for (i = 1; i <= 30; i++)
        printf("-");
    printf("\n");
    return;
}

int main(void)
{
    printf("Drawing a line:\n");
    drawLine();

    printf("\nUsing the line as a separator:\n");
    drawLine();
    printf("Content above\n");
    drawLine();
    printf("Content below\n");
    drawLine();

    return 0;
}