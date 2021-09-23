#include<stdio.h>
long long gcd(long long a,long long b)
{
    return !b?a:gcd(b,a%b);
}
int main() 
{
	int n;
	long long t,i,lcm=1;
	
	scanf("%d",&n);
	scanf("%lld",&lcm);//???lcm???????????????
	for(i=1;i<n;i++)
	{
		scanf("%lld",&t);//t????????????? 
		lcm=lcm/gcd(lcm,t)*t;
	}
		
	printf("%lld\n",lcm);	
	return 0;	
} 