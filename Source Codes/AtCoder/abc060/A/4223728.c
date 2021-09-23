#include <stdio.h>

int main()
{
	char a[10], b[10], c[10];
	scanf("%s%s%s", a, b, c);

	int i, j;
	for (i = 0; a[i] != '\0'; i++) {
		;
	}
	for (j = 0; b[j] != '\0'; j++) {
		;
	}

	if (a[i-1] == b[0] && b[j-1] == c[0]) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}

	return 0;
} 