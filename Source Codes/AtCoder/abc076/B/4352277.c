#include <stdio.h>

int main(void)
{
	int n,k,min=1,i;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		{
		if(min<=k)
			{min*=2;}
		else
			{min+=k;}
		}
	printf("%d",min);
return 0;
} 