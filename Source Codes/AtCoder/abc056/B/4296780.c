#include <stdio.h>
#include <string.h>

int main(void)
{
	int w,a,b,dis;
	scanf("%d%d%d",&w,&a,&b);
	if(a+w<=b || a>=b+w)
		{
		if(a<b){dis=b-(a+w);}
		else{dis=a-(b+w);}
		}
	else{dis=0;}
	printf("%d",dis);
	return 0;
} 