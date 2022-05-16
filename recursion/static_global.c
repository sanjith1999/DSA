#include <stdio.h>
int y = 0;

int fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++, y++;
        printf("x : %d, y : %d\n", x, y);
        return fun(n - 1) + n;
    }

    return 0;
}

int main()
{
    int r = fun(5);
    printf("%d", r);
    return 0;
}