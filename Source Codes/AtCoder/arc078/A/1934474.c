#include<stdio.h>
#include<math.h>
int main(void)
{
	long long int a[200000],x,y=0,dim;
	int n,i,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	x=a[1];
	for(i=2;i<=n;i++)
	{
		y+=a[i];
	}
	dim=llabs(x-y);
	for(t=2;t<n;t++)
	{
		x+=a[t];
	    y-=a[t];
        if(llabs(x-y)<=dim)
        {
        	dim=llabs(x-y);
		}
	}
	printf("%lld",dim);
    return 0;
} 