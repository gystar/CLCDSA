#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	int ca[105];
	for(i=1;i<=n;i++)
		ca[i]=i;
	int pl=0;
	int di;
	int x;
	for(i=0;i<m;i++)
	{
		scanf("%d",&di);
		if(di!=pl)
		{
			j=1;
			while(ca[j]!=di)
				j++;
			x=pl;
			pl=di;
			ca[j]=x;
		}
	}
	for(i=1;i<=n;i++)
		printf("%d\n",ca[i]);
	return 0;
} 