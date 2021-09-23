#include <stdio.h>

int main(void)
{
	char s[2],t[2];
	int i=0;
	scanf("%d%d",&s[0],&s[1]);
	for(i;i <= 1;i++)
	{
		if(s[i]==2)
			{t[i]=0;}
		else if(s[i]==4 || s[i]==6 || s[i]==9 || s[i]==11)
			{t[i]=1;}
		else
			{t[i]=2;}
	}
	if(t[0]==t[1])
		{printf("Yes");}
	else
		{printf("No");}
	return 0;
} 