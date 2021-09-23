#include<stdio.h>
int main()
{
	unsigned long long n,m;
	unsigned long long ans;
	scanf("%llu%llu",&n,&m);
	if(n==1)
	{
		if(m==1) ans=1;
		else  ans=m-2;
	}
	else
	{
		if(m==1)
	 {
		if(n==1) ans=1;
		else ans=n-2;
	 }
	 else
	   ans=(m-2)*(n-2);
	}
	printf("%llu\n",ans);
	return 0;
} 