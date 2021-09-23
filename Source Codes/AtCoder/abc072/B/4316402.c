#include <stdio.h>

int main()
{
	char s[100001];
	scanf("%s", s);
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		if (i % 2 == 0) {
			putchar(s[i]);
		}
	}
	putchar('\n');
	return 0;
} 