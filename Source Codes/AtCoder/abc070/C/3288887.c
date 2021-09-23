#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
	long long int t;
	do
	{
		t=a%b;
		a=b;
		b=t;
	}
	while(t!=0);
	return a;
}
int main()
{
	int n,i,k,l;
	long long int a,j;
	scanf("%d",&n);
	j=1;
	while(n--)
	{
		scanf("%lld",&a);
		j=a/gcd(a,j)*j;
	}
	printf("%lld\n",j);
} 