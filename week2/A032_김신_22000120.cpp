#include <cstdio>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int k, n;
        scanf("%d%d", &k, &n);
        int arr[15][15];
        for (int i = 1; i <= n; i++)
            arr[0][i] = i;
        for (int i = 0; i < k; i++)
        {
            int sum = 0;
            for (int j = 1; j <= n; j++)
            {
                sum += arr[i][j];
                arr[i + 1][j] = sum;
            }
        }
        printf("%d\n", arr[k][n]);
    }
    return 0;
}