#include<stdio.h>

int main()
{
	char x;
	char s[51];
	int i;

	x = getchar();
	getchar();
	scanf("%s", s);

	for(i = 0; i < 50; i++)
		if(s[i] == x)
			continue;
		else if(s[i] == '\0')
			break;
		else
			putchar(s[i]);

	putchar('\n');

	return 0;
} 