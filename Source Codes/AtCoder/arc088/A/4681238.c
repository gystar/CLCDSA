#include<stdio.h>
#include<math.h>
int main()
{
	long long  x,y,i;
	int sum=0;
	scanf("%lld%lld",&x,&y);
    while(x<=y)
	{
		sum++;
		x*=2;
	} 
	printf("%d",sum);
} 