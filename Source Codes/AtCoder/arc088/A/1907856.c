#include<stdio.h>
int main()
{
	long long int a,b;
	int count=0;
	scanf("%lld%lld",&a,&b);
	while(a<=b)
	{
	  a*=2;
	  count++;
	}
	printf("%d\n",count);
} 