#include <stdio.h>

int main()
{
	char s[101];
	scanf("%s", s);
	int i;
	int a = 0, b = 0, c = 0;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'I' || s[i] == 'i') {
			a = 1;
		} else if ((s[i] == 'C' || s[i] == 'c') && a == 1) {
			b = 1;
		} else if ((s[i] == 'T' || s[i] == 't') && a == 1 && b == 1) {
			c = 1;
		}
	}
	if (a == 1 && b == 1 && c == 1) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
} 