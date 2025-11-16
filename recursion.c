#include <stdio.h>

void fun(int i, int j)
{
    int x = 5;
    printf("i=%d;j=%d;x=%d\n", i, j, x);
}

int main()
{
    int i = 1, x = 2, j = 3;
    fun(j, 4);
    printf("i=%d;j=%d;x=%d\n", i, j, x);
    return 0;
}
