#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[3];
	scanf("%s",s);
	int i,sum=700;
	for(i=0;i<=2;i++)
		{if(s[i]=='o'){sum+=100;}}
	printf("%d",sum);

	return 0;
} 