#include<stdio.h>
long long int gcd(long long int a,long long int b){return a%b==0?b:gcd(b,a%b);}
int main(void)
{
	int T,i;
	long long int a,b,c,d,take;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		if(a<b || d<b)
		{
			puts("No");
			continue;
		}
		else if(c>=b)
		{
			puts("Yes");
			continue;
		}
		take=gcd(d,b);
		if(b-take+a%take>c)
			puts("No");
		else
			puts("Yes");
	}
	return 0;
} 