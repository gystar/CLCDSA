#include <stdio.h>

int main()
{
	char s[51], X;
	scanf("%c", &X);
	scanf("%s", s);
	int i;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == X) {
			continue;
		} else {
			printf("%c", s[i]);
		}
	}
	printf("\n");
	return 0;
} 