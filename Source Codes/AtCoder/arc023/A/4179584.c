#include<stdio.h>
int main()
{
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	if(m<3)
	{y--;
	m+=12;}
	printf("%d\n", 735369-(365*y+y/4-y/100+y/400+306*(m+1)/10+d-429));
	return 0;	
} 