#include <stdio.h>

int main(void)
{
	int h,w,i,k;
	scanf("%d%d",&h,&w);
	char s[h+2][w+3];
	for(i=0;i<=h+1;i++)
		{
		if(i==0 || i==h+1)
			{for(k=0;k<=w+1;k++){s[i][k]='#';}}
		else	{scanf("%s",s[i]);}
		}
	for(i=1;i<=h;i++)
		{
		for(k=w+1;k>=0;k--)
			{
			if(k==w+1 || k==0){s[i][k]='#';}
			else {s[i][k]=s[i][k-1];}
			}
		}
	
	for(i=0;i<=h+1;i++)
		{
		for(k=0;k<=w+1;k++)
			{printf("%c",s[i][k]);}
		printf("\n");
		}
return 0;
} 