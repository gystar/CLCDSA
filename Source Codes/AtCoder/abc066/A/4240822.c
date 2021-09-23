#include <stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int x=a+b,y=b+c,z=c+a;
	if(x <= y && x <= z)
		{printf("%d",x);}
	else if( y <= x && y <= z)
		{printf("%d",y);}
	else
		{printf("%d",z);}
	return 0;
} 