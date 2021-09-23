#include <stdio.h>

int main(void)
{
	int n, x, y, z, i, j;
	scanf("%d" "%d" "%d" "%d" , &n, &x, &y, &z);
	if(n==x || n==y || n==z)
	{
		printf("NO\n");
		return 0;
	}
	
	while(n>0)
	{
		i++;
		n=n-3;
		if(n==x || n==y || n==z){
			n++;
			if(n==x || n==y || n==z){
				n++;
				if(n==x || n==y || n==z){
				printf("NO\n");
				return 0;}

			}
		}
	}
	
	if(i<=100)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	
	return 0;
} 