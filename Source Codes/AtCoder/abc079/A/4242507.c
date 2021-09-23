#include <stdio.h>

int main(void)
{
	int i=0,count=1;
	char s[4];
	scanf("%s",s);
	for(i;i <= 2;i++)
		{
		if(s[i] == s[i+1])
			{count++;}
		else
			{count=1;}
		if(count == 3)
			{break;}
		}
	if(count == 3)
		{printf("Yes");}
	else
		{printf("No");}
	return 0;
} 