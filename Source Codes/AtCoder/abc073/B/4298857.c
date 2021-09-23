#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,n,l,r,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
		scanf("%d%d",&l,&r);
		sum+=r-l+1;
		}
	printf("%d\n",sum);
	return 0;
} 