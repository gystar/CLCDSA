#include<stdio.h>
long long int gcm(long long int a,long long int b)
{
	long long int r=a%b;
	while(r>0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	long long int ans;
	scanf("%lld",&ans);
	long long int t;
	for(i=1;i<n;i++)
	{
		scanf("%lld",&t);
		ans=ans*(t/gcm(ans,t));
	}
	printf("%lld\n",ans);
	return 0;
} 