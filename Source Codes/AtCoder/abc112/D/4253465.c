#include<stdio.h>
int main()
{
	int n, k, p;
	int i, j;
	scanf("%d%d", &k, &n);
	if (n%k == 0)
		printf("%d", n / k);
	else
	{
		for (i = n / k; i >= 2; i--)
		{
			if (n%i == 0)
				break;
		}
		printf("%d", i);
	}
	return 0;
} 