#include <stdio.h>

double a, b, c, d;
double p, q;

int main(void)
{
    int i, n;
    scanf("%d %d", &n, &i);
    if (i == 1)
        q = 1.0;
    else
        p = 1.0;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    for (i = 1; i <= n; i++)
    {
        double x = a * p + c * q;
        double y = b * p + d * q;
        p = x, q = y;
    }
    printf("%d\n%d\n", (int)(1000 * p), (int)(1000 * q));
    return false;
}