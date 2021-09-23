#include <stdio.h>
long long n,d=1,ans=1;
long long sumof(long long x)
{
	long long sum=0;
	for (;x;x/=10) sum+=x%10;
	return sum;
}
int main()
{
	scanf("%lld",&n);puts("1");
	for (long long i=1;i<n;i++)
	{
		if ((ans+10*d)*sumof(ans+d)<(ans+d)*sumof(ans+10*d)) d*=10;
		ans+=d;printf("%lld\n",ans);
	}
	return 0;
} 