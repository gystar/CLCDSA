#include<stdio.h>
#include<string.h>
int main()
{
	char s[200005];
	scanf("%s",s);
	int i;
	double ans=0;
	double x=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='W')
		   ans+=x;
		else
		   x++;
	}
	printf("%.0lf\n",ans);
	return 0;
} 