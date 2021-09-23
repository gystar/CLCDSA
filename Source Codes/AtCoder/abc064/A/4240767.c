#include <stdio.h>

int main(void)
{
	int r,g,b,num;
	scanf("%d%d%d",&r,&g,&b);
	num = 100*r+10*g+b;
	if(num%4 == 0)
		{printf("YES");}
	else
		{printf("NO");}
	return 0;
} 