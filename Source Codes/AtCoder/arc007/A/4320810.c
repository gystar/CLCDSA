#include <stdio.h>
#include <string.h>

int main(void) {
	char X, s[51];
	scanf("%c%s", &X, s);
	for (int i = 0; i < strlen(s); ++i) {
		if (X != s[i]) printf("%c", s[i]);
	}
	puts("");
	return 0;
} 