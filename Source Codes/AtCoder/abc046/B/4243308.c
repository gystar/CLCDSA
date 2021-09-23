#include <stdio.h>
#include <string.h>

int main(void)
{
	int n,k;
	scanf("%d%d",&n,&k);
	int ans=k,i=1;
	for(i;i<=n-1;i++)
		{ans *= (k-1);}
	printf("%d\n",ans);
	return 0;
} 