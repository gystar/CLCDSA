#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	int a=n/100;
	int c=(n%100)%10;
	if(a == c)
		{printf("Yes");}
	else
		{printf("No");}
	return 0;
} 