#include<stdio.h>

int main()
{
	int n, cnt = 0;

	scanf("%d", &n);

	while(n >= 7)
	{
		n -= 10;
		cnt += 100;
	}

	while(n >= 1)
	{
		n -= 1;
		cnt += 15;
	}

	printf("%d\n", cnt);

	return 0;
} 