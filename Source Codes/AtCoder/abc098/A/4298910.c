#include <stdio.h>
#include <string.h>

int main(void)
{
	int a,b,max;
	scanf("%d%d",&a,&b);
	max=a+b;
	if(max<a-b){max=a-b;}
	if(max<a*b){max=a*b;}
	printf("%d\n",max);
	return 0;
} 