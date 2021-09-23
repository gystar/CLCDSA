#include <stdio.h>
#include <math.h>

int main ()
{
	int d[7],j[7];
	for(int i=0;i<7;i++)
	{
		scanf("%d",&d[i]);
	}
	scanf("\n");
	for(int i=0;i<7;i++)
	{
		scanf("%d",&j[i]);
	}
	scanf("\n");
	int sum;
	for(int i=0;i<7;i++)
	{
		sum+= d[i]>j[i]?d[i]:j[i];
	}
	printf("%d\n", sum);
	return 0;
} 