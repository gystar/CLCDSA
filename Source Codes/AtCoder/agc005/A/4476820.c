#include<stdio.h>
#include<string.h>
int main()
{
	char x[200005];
	scanf("%s",x);
	int ans=0;
	int n=strlen(x);
	int i,a;
	a=0;
	for(i=0;i<n;i++)
	{
		if(x[i]=='S')
			a++;
		else if(a>0)
			a--;
		else
			ans++;
	}
	ans+=a;
	printf("%d\n",ans);
	return 0;
} 