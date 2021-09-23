#include <stdio.h>

int main(void)
{
	int n,k,min=0,i,x;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		{
		scanf("%d",&x);
		if(x<=k/2){min+=2*x;}
		else{min+=2*(k-x);}
		}
	printf("%d",min);
return 0;
} 