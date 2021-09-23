#include <stdio.h>

int main(void)
{
	char s[100];
	int i;
	
	scanf("%s\n%d",s,&i);
	
	printf("%c\n",s[i-1]);
	
	return 0;
} 