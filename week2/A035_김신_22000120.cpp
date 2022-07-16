#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        double input;
        char oper = 0;

        scanf("%lf", &input);

        while (oper != 10)
        {
            scanf("%c", &oper);
            if (oper == 32)
                continue;

            switch (oper)
            {
            case '@':
                input *= 3;
                break;
            case '%':
                input += 5;
                break;
            case '#':
                input -= 7;
                break;
            default:
                break;
            }
        }

        printf("%.2lf\n", input);
    }

    return 0;
}