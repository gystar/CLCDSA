#include<stdio.h>
#include<math.h>
int main()
{
	long long x,y,count=0;
	
		count=0;
		scanf("%lld%lld",&x,&y);
	if(fabs(x)==fabs(y))
	{
		if(x*y<0)
		count++;
		//printf("%d\n",count);
	}
	if(fabs(x)<fabs(y))
	{
		count+=fabs(y)-fabs(x);
		if(x<0)
		{
			count++;
			if(y<0)
			count++;
		}
		else
		{
			if(y<0)
			count++;
		}
	}
	if(fabs(x)>fabs(y))
	{
		count+=fabs(x)-fabs(y);
		if(x>0)
		{
			count++;
			if(y>0)
			count++;
		}
		else
		{
			if(y>0)
			count++;
		}
	}
	printf("%lld\n",count);
	
} 