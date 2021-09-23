#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int ng[3];
	for(i=0;i<3;i++)
		scanf("%d",&ng[i]);
	for(i=0;i<3;i++)
	{
		if(ng[i]==n)
		{
			printf("NO\n");
			return 0;
		}
	}
	int p,x=0,q;
	while(n>0)
	{
		q=0;
		p=0;
		if(n>2)
		{
			for(i=0;i<3;i++)
				if(n-3==ng[i])
					p++;
			if(p==0)
			{
				n-=3;
				x++;
				q++;
			}
		}
		if(q>0)
			continue;
		p=0;
		if(n>1)
		{
			for(i=0;i<3;i++)
				if(n-2==ng[i])
					p++;
			if(p==0)
			{
				n-=2;
				x++;
				q++;
			}
		}
		if(q>0)
			continue;
		p=0;
		if(n>0)
		{
			for(i=0;i<3;i++)
				if(n-1==ng[i])
					p++;
			if(p==0)
			{
				n--;
				x++;
				q++;
			}
		}
		if(q>0)
			continue;
		printf("NO\n");
		return 0;
	}
	if(x>100)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
} 