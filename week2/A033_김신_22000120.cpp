#include <stdio.h>

int main()
{
    int i, a, b, c, d, max = 0, x;
    for (i = 1; i <= 5; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a + b + c + d > max)
        {
            max = a + b + c + d;
            x = i;
        }
    }
    printf("%d %d", x, max);

    return 0;
}