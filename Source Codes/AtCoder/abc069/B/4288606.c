#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[101];
	scanf("%s",s);
	int len=strlen(s);
	int mid=len-2;
	printf("\n%c%d%c\n",s[0],mid,s[len-1]);

	return 0;
} 