#include <stdio.h>
int main()
{
	int n,m,c,i,j,flag,sum,now;
	int keisu[500];
	sum=0;
	scanf("%d%d%d",&n,&m,&c);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&keisu[i]);
	}
	for(i=1;i<=n;i++)
	{
		flag=0;
		for(j=1;j<=m;j++)
		{
			scanf("%d",&now);
			flag=flag+(now*keisu[j]);
		}
		flag=flag+c;
		if(flag>0)
		{
			sum++;
		}
	}
	printf("%d",sum);
			
			
		
	
} 