#include<stdio.h>

int main()
{
	int i,n,s[110],c=1,ans=0;
	scanf("%d",&n);
	s[0]=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&(s[i]));
		if(s[i]==s[i-1])c++;
		else c=1;
		if(c%2==0)ans++;
	}
	printf("%d",ans);
} 