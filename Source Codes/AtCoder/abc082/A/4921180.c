#include<stdio.h>
int main()
{
    int a, b, c, d;
	scanf("%d%d", &a, &b);
	
	c = a + b;
	d = c / 2;
	
	if(c % 2 == 0)
	{
		printf("%d\n", d);
	}
	else
	{
		printf("%d\n", d + 1);
	}
	
	return 0;
} 