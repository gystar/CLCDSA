#include<stdio.h>
#include<string.h>
int main()
{
	char s[100005];
	scanf("%s",s);
	int n=strlen(s);
	int i;
	int g,p;
	g=p=0;
	int ans=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='g')
		{
			if(p+1<=g)
			{
				p++;
				ans++;
			}
			else
				g++;
		}
		else
		{
			if(p+1<=g)
				p++;
			else
			{
				g++;
				ans--;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
} 