#include <stdio.h>

int main(void)
{
	int x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	int m=(x-a)/b;
	int rest = x-a-m*b;
	printf("%d\n",rest);
	return 0;
} 