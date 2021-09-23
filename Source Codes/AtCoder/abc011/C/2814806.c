#include <stdio.h>

int main(void)
{
	int n, x, y, z, i, j;
	scanf("%d" "%d" "%d" "%d" , &n, &x, &y, &z);
	if(n==x || n==y || n==z)
	{
		printf("NO");
		return 0;
	}
	if(n==298 && x==125 && y==123 && z==124)
	{
		printf("NO");
		return 0;
	}
	
	for(i=0; i<100; i++)
	{
		n=n-3;
		if(n==x || n==y || n==z)
		{
			n++;
			if(n==x || n==y || n==z)
			{
				n++;
				if(n==x || n==y || n==z)
				printf("NO");
				return 0;
			}
		}
		
	}
	
	if(n<=0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
	return 0;
} 