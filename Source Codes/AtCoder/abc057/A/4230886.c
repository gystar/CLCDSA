#include <stdio.h>

int main(void)
{
	int cur,aft;
	scanf("%d%d",&cur,&aft);
	int time = (cur + aft%24)%24;
	printf("%d",time);
	return 0;
} 