#include <stdio.h>
#include <string.h>

int main(void)
{
	int n,i,a,max=0,count,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
		a=i;
		count=0;
		while(a%2==0){count++, a/=2;}
		if(max<=count){max=count,ans=i;}
		}

	printf("\n%d\n",ans);
	return 0;
} 