#include<stdio.h>
int main()
{
	int N, A, B;
	scanf("%d%d%d", &N, &A, &B);
	
	if(N*A < B)
	{
		printf("%d\n", N*A);
	}
	else
	{
		printf("%d\n", B);
	}
	return 0;
} 