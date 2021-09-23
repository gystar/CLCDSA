#include<stdio.h>
#include<string.h>
int main()
{
	char s[202];
	scanf("%s",s);
	int i;
	int ans;
	int k;
	for(ans=strlen(s)-2;ans>=0;ans-=2)
	{
		k=0;
		for(i=0;i<ans/2;i++)
		{
			if(s[i]!=s[ans/2+i])
			{
				k++;
				break;
			}
		}
		if(k==0)
		  break;
	}
	printf("%d\n",ans);
	return 0;
} 