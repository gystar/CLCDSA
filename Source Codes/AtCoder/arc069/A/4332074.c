#include<stdio.h>

int main()
{
	long long n,m,count=0;
	scanf("%lld %lld",&n,&m);
	if(m-n*2<=0)
	count=m/2;
	else
	{
		count+=n;
		m=m-2*n;
		count+=m/4;
	}
	printf("%lld",count);
	return 0;
} 