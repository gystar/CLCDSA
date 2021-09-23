#include <stdio.h>
#include <string.h>
#define int long long
int main(void)
{
	int n,i;
	scanf("%d",&n);
	int power=1,rest=1,quo;
	fprintf(stderr,"\n");
	for(i=1;i<=n;i++)
		{
		power = rest*i;
		rest = power%1000000007;
		quo = power/1000000007;
		if(i>=n-10){fprintf(stderr,"power=%d*(10^9+7)+%d\n",quo,rest);}
		}
	printf("%d\n",rest);
	

	
	
	

	return 0;
} 