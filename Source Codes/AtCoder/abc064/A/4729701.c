#include<stdio.h>
int main(void)
{
	int r,g,b,i;
	scanf("%d%d%d",&r,&g,&b);
	i=g*10+b;
	
	if(i%4==0)
		printf("\nYES\n\n");
	else 
		printf("\nNO\n\n");
	
	
	return 0;
} 