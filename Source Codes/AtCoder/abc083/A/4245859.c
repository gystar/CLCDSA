#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a+b==c+d)
		{printf("Balanced");}
	else if(a+b>c+d)
		{printf("Left");}
	else
		{printf("Right");}
	return 0;
} 