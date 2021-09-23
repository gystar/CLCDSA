#include <stdio.h>

int main(void)
{
	char s[100];
	scanf("%s",s);
	
	s[5]=' ';
	s[13]=' ';
	
	printf("%s\n",s);
	
	return 0;
} 