#include <stdio.h>

int main()
{
	long long m,n,max;
	scanf("%lld%lld",&n,&m);
	if(n*2<=m)
	{
	m-=n*2;
	max=n+m/4;
    }
	else
	max=m/2;
	printf("%lld\n",max);
	return 0;
} 