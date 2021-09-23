#include<stdio.h>
#include<string.h>
int main()
{
	char m,n;
	scanf("%c %c",&m,&n);
	if(m == 'H')
	{
		if(n == 'H')
		{
			printf("H\n");
		}
		else
		{
			printf("D\n");
		}
	}
	else
	{
		if(n == 'H')
		{
			printf("D\n");
		}
		else
		{
			printf("H\n");
		}
	}
	return 0;
} 