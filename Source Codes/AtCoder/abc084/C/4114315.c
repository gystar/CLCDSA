#include<stdio.h>
int main()
{
	int n,c[500],f[500],i,j;
	long long int s[500],t;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d%lld%d",&c[i],&s[i],&f[i]);
	}
	for(i=0;i<n-1;i++)
	{
		t=c[i]+s[i];
		for(j=i+1;j<n-1;j++)
		{
			if(t>=s[j])
			{
				if((t-s[j])%f[j]==0)
				{
					t+=c[j];
				}
				else
				{
					t=s[j]+(t-s[j])/f[j]*f[j]+f[j];
					t+=c[j];
				}
			}
			else
			{
				t=s[j]+c[j];
			}
		}
		printf("%lld\n",t);
	}
	printf("0");
} 