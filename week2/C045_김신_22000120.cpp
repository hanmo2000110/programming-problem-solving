#include <cstdio>

char str[14][10] = {
    "baby", "sukhwan", "tururu", "turu",
    "very", "cute", "tururu", "turu",
    "in", "bed", "tururu", "turu",
    "baby", "sukhwan"};

void print_t(int a)
{
    if (a >= 5)
        printf("tu+ru*%d", a);
    else
    {
        printf("tu");
        while (a--)
            printf("ru");
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    N--;
    int time = N / 14;
    int g = N % 14;
    if (str[g][0] != 't')
        puts(str[g]);
    else if (str[g - 1][0] == 't')
    {
        print_t(1 + time);
    }
    else
        print_t(2 + time);
    return 0;
}