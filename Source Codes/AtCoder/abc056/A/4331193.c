#include<stdio.h>
int main()
{
	char a,b;
	scanf("%c",&a);
	getchar();
	scanf("%c",&b);
	if(a=='H')
	{
		if(b=='H')
		printf("H");
		else
		printf("D");
	}
	else
	{
		if(b=='D')
		printf("H");
		else
		printf("D");
	}
	
	return 0;
} 