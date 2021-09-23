#include <stdio.h>

int main(void)
{
	char str[200];
	scanf("%s",str);
	str[5] = ' ';
	str[13] = ' ';
	printf("%s",str);
	return 0;
} 