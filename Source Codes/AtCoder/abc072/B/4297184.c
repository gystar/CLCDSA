#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[100001];
	scanf("%s",s);
	int len=strlen(s);
	for(i=0;i<=len-1;i+=2)
		{printf("%c",s[i]);}
	printf("\n");
	return 0;
} 