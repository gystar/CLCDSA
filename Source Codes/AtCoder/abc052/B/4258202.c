#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	int x=0,i=0,max=0;
	for(i;i<=n-1;i++)
		{
		if(s[i]=='I')
			{x++;
			if(x>max){max=x;}
			}
		else
			{x--;}
		}
	printf("%d\n",max);
	return 0;
} 