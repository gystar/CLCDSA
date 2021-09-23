#include <stdio.h>


int main(void)
{
	int min=0,h,m,ans=0;
	scanf("%d %d",&h,&m);
	
	min=h*60+m;
	ans=18*60-min;
	
	printf("%d\n",ans);
	return 0;
} 