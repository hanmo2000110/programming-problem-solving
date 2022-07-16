#include <stdio.h>
int main()
{
	int n, E, S, M;
	scanf("%d %d %d", &E, &S, &M);
	for (n = 1;; n++)
	{
		if ((n % 15 == E % 15) && (n % 28 == S % 28) && (n % 19 == M % 19))
			break;
	}
	printf("%d", n);
}