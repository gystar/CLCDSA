#include<stdio.h>
int main(void)
{
	char x,y;
	
	scanf("%c %c",&x,&y);
	
	if((int)(x)<(int)(y)) printf("<");
	else if((int)(x)>(int)(y)) printf(">");
	else printf("=");
	
	return 0;
} 